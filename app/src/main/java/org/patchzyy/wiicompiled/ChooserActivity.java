package org.patchzyy.wiicompiled;

import android.app.Activity;
import android.content.Intent;
import android.net.Uri;
import android.os.Bundle;
import android.os.Handler;
import android.os.Looper;
import android.provider.OpenableColumns;
import android.view.Gravity;
import android.view.View;
import android.view.ViewGroup;
import android.widget.LinearLayout;
import android.widget.ProgressBar;
import android.widget.TextView;

import androidx.activity.result.ActivityResultLauncher;
import androidx.activity.result.contract.ActivityResultContracts;
import androidx.appcompat.app.AppCompatActivity;

import com.google.android.material.button.MaterialButton;
import com.google.android.material.color.DynamicColors;
import com.google.android.material.dialog.MaterialAlertDialogBuilder;

import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

/**
 * The app's real launcher entry point (see AndroidManifest.xml - this is the
 * only activity with the MAIN/LAUNCHER intent-filter). Desktop ships
 * WiiCompiled.exe and RetroRewind.exe as two separate executables the user
 * picks between at the shell; since a single Android app can only have one
 * icon reasonably, this screen replicates that choice in-app instead of
 * shipping two launcher icons for what is otherwise one APK (see the
 * discussion in AGENTS - two-launcher-icons vs in-app-chooser).
 *
 * Also gates entry behind IsoLibrary's staged-disc-image check (see AGENTS -
 * on-device translation pipeline): the two product buttons stay disabled
 * until the user has picked a disc image via Storage Access Framework and
 * IsoLibrary has finished copying it into app-private storage. This is
 * Stage 1 of that pipeline only - staging the ISO - not yet translation or
 * native compilation, which are separate, not-yet-built stages.
 *
 * Selecting either product button starts GameActivity with an intent extra
 * naming the built library ("wiicompiled" / "retrorewind", matching the
 * OUTPUT_NAME set in runtime/cmake/PublicProducts.cmake's Android branch),
 * which GameActivity.getLibraries() reads before SDLActivity loads it.
 */
public class ChooserActivity extends AppCompatActivity {

    static final String EXTRA_LIBRARY_NAME = "org.patchzyy.wiicompiled.LIBRARY_NAME";

    private final ExecutorService stagingExecutor = Executors.newSingleThreadExecutor();
    private final Handler mainHandler = new Handler(Looper.getMainLooper());

    private TextView statusText;
    private ProgressBar progressBar;
    private MaterialButton pickIsoButton;
    private MaterialButton changeIsoButton;
    private MaterialButton launchWiiCompiledButton;
    private MaterialButton launchRetroRewindButton;
    private LinearLayout progressGroup;

    private final ActivityResultLauncher<String[]> isoPickerLauncher =
            registerForActivityResult(new ActivityResultContracts.OpenDocument(), this::onIsoPicked);

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        // Must run before setContentView/super's theme resolution picks up
        // the static fallback palette - applies the device wallpaper's
        // Material You palette on API 31+, no-op (silently) below that.
        DynamicColors.applyToActivityIfAvailable(this);
        super.onCreate(savedInstanceState);

        setContentView(buildRootView());
        refreshStagingState();
    }

    @Override
    protected void onDestroy() {
        super.onDestroy();
        stagingExecutor.shutdownNow();
    }

    // ---- UI construction --------------------------------------------------

    private View buildRootView() {
        int pad = dp(32);

        LinearLayout root = new LinearLayout(this);
        root.setOrientation(LinearLayout.VERTICAL);
        root.setGravity(Gravity.CENTER);
        root.setPadding(pad, pad, pad, pad);
        root.setLayoutParams(new ViewGroup.LayoutParams(
                ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.MATCH_PARENT));

        TextView title = new TextView(this);
        title.setText(R.string.app_name);
        title.setTextAppearance(com.google.android.material.R.style.TextAppearance_Material3_HeadlineMedium);
        title.setGravity(Gravity.CENTER);
        title.setPadding(0, 0, 0, dp(8));
        root.addView(title);

        statusText = new TextView(this);
        statusText.setTextAppearance(com.google.android.material.R.style.TextAppearance_Material3_BodyMedium);
        statusText.setGravity(Gravity.CENTER);
        statusText.setPadding(0, 0, 0, dp(32));
        root.addView(statusText);

        progressGroup = new LinearLayout(this);
        progressGroup.setOrientation(LinearLayout.VERTICAL);
        progressGroup.setGravity(Gravity.CENTER);
        progressGroup.setVisibility(View.GONE);
        LinearLayout.LayoutParams progressParams = new LinearLayout.LayoutParams(
                ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.WRAP_CONTENT);
        progressParams.bottomMargin = dp(24);
        progressGroup.setLayoutParams(progressParams);

        progressBar = new ProgressBar(this, null, android.R.attr.progressBarStyleHorizontal);
        progressBar.setIndeterminate(false);
        progressBar.setMax(1000);
        progressBar.setLayoutParams(new LinearLayout.LayoutParams(
                ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.WRAP_CONTENT));
        progressGroup.addView(progressBar);
        root.addView(progressGroup);

        pickIsoButton = filledButton(R.string.select_disc_image);
        pickIsoButton.setOnClickListener(v -> launchPicker());
        root.addView(pickIsoButton);

        changeIsoButton = tonalButton(R.string.change_disc_image);
        changeIsoButton.setVisibility(View.GONE);
        changeIsoButton.setOnClickListener(v -> confirmChangeDiscImage());
        root.addView(changeIsoButton);

        root.addView(spacer(dp(24)));

        launchWiiCompiledButton = filledButton(R.string.launch_mario_kart_wii);
        launchWiiCompiledButton.setOnClickListener(v -> launchGame("wiicompiled"));
        root.addView(launchWiiCompiledButton);

        root.addView(spacer(dp(16)));

        launchRetroRewindButton = filledButton(R.string.launch_retro_rewind);
        launchRetroRewindButton.setOnClickListener(v -> launchGame("retrorewind"));
        root.addView(launchRetroRewindButton);

        return root;
    }

    private MaterialButton filledButton(int textRes) {
        MaterialButton button = new MaterialButton(this);
        button.setText(textRes);
        button.setTextSize(18);
        button.setPadding(dp(24), dp(16), dp(24), dp(16));
        button.setLayoutParams(new LinearLayout.LayoutParams(
                ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.WRAP_CONTENT));
        return button;
    }

    private MaterialButton tonalButton(int textRes) {
        MaterialButton button = filledButton(textRes);
        button.setBackgroundTintList(getColorStateList(R.color.md_theme_tonal_button_container));
        return button;
    }

    private View spacer(int height) {
        View view = new View(this);
        // Explicit fixed-size LayoutParams, set directly rather than relying
        // on LinearLayout's addView()-default-generated params: a bare View
        // added via the 1-arg addView() overload was observed (via
        // uiautomator dump) expanding to consume the rest of the screen's
        // height instead of the intended fixed spacer height, which also
        // silently prevented every subsequent addView() call in
        // buildRootView() from actually appearing in the final layout.
        view.setLayoutParams(new LinearLayout.LayoutParams(
                ViewGroup.LayoutParams.MATCH_PARENT, height));
        return view;
    }

    private int dp(int value) {
        float density = getResources().getDisplayMetrics().density;
        return Math.round(value * density);
    }

    // ---- Staging state machine --------------------------------------------

    private void refreshStagingState() {
        boolean staged = IsoLibrary.isStaged(this);
        progressGroup.setVisibility(View.GONE);
        pickIsoButton.setEnabled(true);

        if (staged) {
            String name = IsoLibrary.stagedDisplayName(this);
            statusText.setText(getString(R.string.disc_image_staged, name != null ? name : ""));
            pickIsoButton.setVisibility(View.GONE);
            changeIsoButton.setVisibility(View.VISIBLE);
            setLaunchButtonsEnabled(true);
        } else {
            statusText.setText(R.string.no_disc_image_staged);
            pickIsoButton.setVisibility(View.VISIBLE);
            changeIsoButton.setVisibility(View.GONE);
            setLaunchButtonsEnabled(false);
        }
    }

    private void setLaunchButtonsEnabled(boolean enabled) {
        launchWiiCompiledButton.setEnabled(enabled);
        launchRetroRewindButton.setEnabled(enabled);
        if (enabled) {
            launchWiiCompiledButton.setBackgroundTintList(
                    android.content.res.ColorStateList.valueOf(getColor(R.color.md_theme_primary)));
            launchWiiCompiledButton.setTextColor(getColor(R.color.md_theme_onPrimary));
            launchRetroRewindButton.setBackgroundTintList(
                    android.content.res.ColorStateList.valueOf(getColor(R.color.md_theme_primary)));
            launchRetroRewindButton.setTextColor(getColor(R.color.md_theme_onPrimary));
        } else {
            int containerColor = getColor(R.color.button_disabled_container);
            int contentColor = getColor(R.color.button_disabled_content);
            launchWiiCompiledButton.setBackgroundTintList(
                    android.content.res.ColorStateList.valueOf(containerColor));
            launchWiiCompiledButton.setTextColor(contentColor);
            launchRetroRewindButton.setBackgroundTintList(
                    android.content.res.ColorStateList.valueOf(containerColor));
            launchRetroRewindButton.setTextColor(contentColor);
        }
    }

    private void confirmChangeDiscImage() {
        new MaterialAlertDialogBuilder(this)
                .setTitle(R.string.change_disc_image)
                .setMessage(R.string.change_disc_image_confirm)
                .setPositiveButton(R.string.change_disc_image, (dialog, which) -> {
                    IsoLibrary.clearStaged(this);
                    refreshStagingState();
                })
                .setNegativeButton(android.R.string.cancel, null)
                .show();
    }

    // ---- Picking & staging --------------------------------------------------

    private void launchPicker() {
        // No universal MIME type for disc images; "*/*" plus IsoLibrary's own
        // extension check on the result is more reliable across SAF providers
        // than trying to enumerate vendor-specific MIME types for .iso/.rvz/.wbfs.
        isoPickerLauncher.launch(new String[]{"*/*"});
    }

    private void onIsoPicked(Uri uri) {
        if (uri == null) {
            return; // user backed out of the picker
        }

        String displayName = queryDisplayName(uri);
        beginStaging(uri, displayName);
    }

    private String queryDisplayName(Uri uri) {
        try (android.database.Cursor cursor =
                     getContentResolver().query(uri, null, null, null, null)) {
            if (cursor != null && cursor.moveToFirst()) {
                int nameIndex = cursor.getColumnIndex(OpenableColumns.DISPLAY_NAME);
                if (nameIndex >= 0) {
                    return cursor.getString(nameIndex);
                }
            }
        } catch (Exception ignored) {
            // fall through to the Uri's own last path segment below
        }
        String segment = uri.getLastPathSegment();
        return segment != null ? segment : "selected file";
    }

    private void beginStaging(Uri uri, String displayName) {
        pickIsoButton.setEnabled(false);
        changeIsoButton.setEnabled(false);
        progressGroup.setVisibility(View.VISIBLE);
        progressBar.setIndeterminate(true);
        statusText.setText(getString(R.string.staging_disc_image, displayName));

        stagingExecutor.execute(() -> {
            try {
                // Persist read access across app restarts - a plain
                // ACTION_OPEN_DOCUMENT grant alone doesn't survive process
                // death, and re-staging on every cold start would defeat
                // IsoLibrary's whole point.
                try {
                    getContentResolver().takePersistableUriPermission(
                            uri, Intent.FLAG_GRANT_READ_URI_PERMISSION);
                } catch (SecurityException ignored) {
                    // Some providers don't support persistable grants; the
                    // copy below still succeeds for this session regardless.
                }

                IsoLibrary.stageFromUri(this, uri, displayName, (copied, total) ->
                        mainHandler.post(() -> updateProgress(copied, total)));

                mainHandler.post(this::refreshStagingState);
            } catch (Exception e) {
                mainHandler.post(() -> showStagingError(e));
            }
        });
    }

    private void updateProgress(long copied, long total) {
        if (total > 0) {
            progressBar.setIndeterminate(false);
            progressBar.setProgress((int) (1000L * copied / total));
            statusText.setText(getString(
                    R.string.staging_progress, copied / (1024 * 1024), total / (1024 * 1024)));
        } else {
            progressBar.setIndeterminate(true);
            statusText.setText(getString(R.string.staging_progress_unknown_size, copied / (1024 * 1024)));
        }
    }

    private void showStagingError(Exception e) {
        progressGroup.setVisibility(View.GONE);
        pickIsoButton.setEnabled(true);
        changeIsoButton.setEnabled(true);
        new MaterialAlertDialogBuilder(this)
                .setTitle(R.string.staging_failed_title)
                .setMessage(e.getMessage() != null ? e.getMessage() : e.toString())
                .setPositiveButton(android.R.string.ok, null)
                .show();
        refreshStagingState();
    }

    // ---- Launching ----------------------------------------------------------

    private void launchGame(String libraryName) {
        Intent intent = new Intent(ChooserActivity.this, GameActivity.class);
        intent.putExtra(EXTRA_LIBRARY_NAME, libraryName);
        startActivity(intent);
    }
}
