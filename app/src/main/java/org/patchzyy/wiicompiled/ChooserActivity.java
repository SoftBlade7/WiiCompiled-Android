package org.patchzyy.wiicompiled;

import android.app.Activity;
import android.content.Intent;
import android.graphics.Color;
import android.os.Bundle;
import android.view.Gravity;
import android.view.View;
import android.widget.Button;
import android.widget.LinearLayout;
import android.widget.TextView;

/**
 * The app's real launcher entry point (see AndroidManifest.xml - this is the
 * only activity with the MAIN/LAUNCHER intent-filter). Desktop ships
 * WiiCompiled.exe and RetroRewind.exe as two separate executables the user
 * picks between at the shell; since a single Android app can only have one
 * icon reasonably, this screen replicates that choice in-app instead of
 * shipping two launcher icons for what is otherwise one APK (see the
 * discussion in AGENTS - two-launcher-icons vs in-app-chooser).
 *
 * Selecting either option starts GameActivity with an intent extra naming
 * the built library ("wiicompiled" / "retrorewind", matching the
 * OUTPUT_NAME set in runtime/cmake/PublicProducts.cmake's Android branch),
 * which GameActivity.getLibraries() reads before SDLActivity loads it.
 */
public class ChooserActivity extends Activity {

    static final String EXTRA_LIBRARY_NAME = "org.patchzyy.wiicompiled.LIBRARY_NAME";

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);

        LinearLayout root = new LinearLayout(this);
        root.setOrientation(LinearLayout.VERTICAL);
        root.setGravity(Gravity.CENTER);
        root.setBackgroundColor(Color.BLACK);
        int pad = dp(32);
        root.setPadding(pad, pad, pad, pad);

        TextView title = new TextView(this);
        title.setText("WiiCompiled");
        title.setTextColor(Color.WHITE);
        title.setTextSize(28);
        title.setGravity(Gravity.CENTER);
        title.setPadding(0, 0, 0, dp(48));
        root.addView(title);

        root.addView(buildLaunchButton("Mario Kart Wii", "wiicompiled"));
        root.addView(spacer());
        root.addView(buildLaunchButton("Retro Rewind", "retrorewind"));

        setContentView(root);
    }

    private Button buildLaunchButton(String label, String libraryName) {
        Button button = new Button(this);
        button.setText(label);
        button.setTextSize(20);
        button.setPadding(dp(24), dp(20), dp(24), dp(20));
        button.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent intent = new Intent(ChooserActivity.this, GameActivity.class);
                intent.putExtra(EXTRA_LIBRARY_NAME, libraryName);
                startActivity(intent);
            }
        });
        return button;
    }

    private View spacer() {
        View view = new View(this);
        view.setMinimumHeight(dp(24));
        return view;
    }

    private int dp(int value) {
        float density = getResources().getDisplayMetrics().density;
        return Math.round(value * density);
    }
}
