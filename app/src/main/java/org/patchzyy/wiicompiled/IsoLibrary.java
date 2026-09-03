package org.patchzyy.wiicompiled;

import android.content.ContentResolver;
import android.content.Context;
import android.net.Uri;
import android.util.Log;

import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;

/**
 * Owns staging of the user-supplied Wii disc image (.iso / .rvz / .wbfs) into
 * app-private storage, so the on-device Translator.Cli pipeline (see
 * AGENTS - on-device translation pipeline) always has a plain filesystem path
 * to read from rather than a content:// Uri.
 *
 * Mirrors AssetExtractor's version-marker pattern for idempotency, but keyed
 * on "is *a* game staged at all" rather than a fixed bundled-asset version,
 * since the staged file is user-supplied and only ever changes when the user
 * explicitly picks a new one via IsoPickerContract.
 */
final class IsoLibrary {

    private static final String TAG = "WiiCompiled";

    // Sits alongside AssetExtractor's staged game/ files in getFilesDir(), not
    // under a games/ subdirectory - there is only ever one staged disc image
    // at a time (see ChooserActivity's single shared-ISO model).
    private static final String STAGED_FILENAME = "game_disc.staged";
    private static final String MARKER_FILE = ".iso_staged_name";

    // Real Wii/GameCube discs run from a little under 1 GiB (GameCube-era
    // minis, RVZ's compressed range) up to the dual-layer DVD9 ceiling of
    // 8.5 GB - reject anything wildly outside that as an obviously wrong
    // pick before committing to a multi-GB copy. This is a sanity check, not
    // a strict validator; the real format/content check happens once
    // Translator.Cli actually opens the staged file.
    private static final long MIN_PLAUSIBLE_BYTES = 1L * 1024 * 1024 * 1024;       // 1 GiB
    private static final long MAX_PLAUSIBLE_BYTES = 9L * 1024 * 1024 * 1024;       // 9 GiB

    interface CopyProgressListener {
        /** Called periodically from a background thread. bytesTotal is -1 if unknown. */
        void onProgress(long bytesCopied, long bytesTotal);
    }

    static final class ValidationException extends IOException {
        ValidationException(String message) {
            super(message);
        }
    }

    private IsoLibrary() {}

    /** True if a disc image is already staged and ready for translation. */
    static boolean isStaged(Context context) {
        return stagedFile(context).exists() && marker(context).exists();
    }

    static File stagedFile(Context context) {
        return new File(context.getFilesDir(), STAGED_FILENAME);
    }

    private static File marker(Context context) {
        return new File(context.getFilesDir(), MARKER_FILE);
    }

    /** The display name of the currently staged disc image, or null if none is staged. */
    static String stagedDisplayName(Context context) {
        File marker = marker(context);
        if (!marker.exists()) {
            return null;
        }
        try {
            byte[] bytes = java.nio.file.Files.readAllBytes(marker.toPath());
            return new String(bytes, java.nio.charset.StandardCharsets.UTF_8).trim();
        } catch (IOException e) {
            return null;
        }
    }

    /**
     * Validates and copies the picked Uri into app-private storage. Runs
     * synchronously and does file I/O - callers must invoke this off the
     * main thread (see ChooserActivity's staging AsyncTask/executor use).
     *
     * @param displayName the picked file's display name, for validation and
     *                    for the marker record shown back to the user later.
     */
    static void stageFromUri(Context context, Uri uri, String displayName, CopyProgressListener listener)
            throws IOException {
        validateExtension(displayName);

        ContentResolver resolver = context.getContentResolver();
        long declaredSize = queryDeclaredSize(resolver, uri);
        if (declaredSize > 0) {
            validateSize(declaredSize);
        }
        // If the size couldn't be determined up front (some SAF providers
        // don't report it), we still copy and let a post-copy size check
        // below catch an obviously-wrong pick rather than blocking upfront.

        File dest = stagedFile(context);
        File tmp = new File(context.getFilesDir(), STAGED_FILENAME + ".partial");

        long copied = 0;
        try (InputStream in = resolver.openInputStream(uri);
             OutputStream out = new FileOutputStream(tmp)) {
            if (in == null) {
                throw new IOException("Could not open an input stream for the selected file.");
            }
            byte[] buffer = new byte[1024 * 1024];
            int read;
            long lastReportedAt = 0;
            while ((read = in.read(buffer)) != -1) {
                out.write(buffer, 0, read);
                copied += read;
                // Throttle progress callbacks to roughly every 8 MB rather
                // than every 1 MB read, since ChooserActivity's progress bar
                // only needs coarse updates and posting to the UI thread on
                // every single buffer read would be wasteful.
                if (copied - lastReportedAt >= 8 * 1024 * 1024) {
                    lastReportedAt = copied;
                    if (listener != null) {
                        listener.onProgress(copied, declaredSize > 0 ? declaredSize : -1);
                    }
                }
            }
            if (listener != null) {
                listener.onProgress(copied, copied);
            }
        } catch (IOException e) {
            //noinspection ResultOfMethodCallIgnored
            tmp.delete();
            throw e;
        }

        try {
            validateSize(copied);
        } catch (ValidationException e) {
            //noinspection ResultOfMethodCallIgnored
            tmp.delete();
            throw e;
        }

        //noinspection ResultOfMethodCallIgnored
        dest.delete();
        if (!tmp.renameTo(dest)) {
            //noinspection ResultOfMethodCallIgnored
            tmp.delete();
            throw new IOException("Could not finalize staged disc image (rename failed).");
        }

        writeMarker(context, displayName);
        Log.i(TAG, "Staged disc image: " + displayName + " (" + copied + " bytes)");
    }

    /** Removes the staged disc image, so ChooserActivity falls back to the picker again. */
    static void clearStaged(Context context) {
        //noinspection ResultOfMethodCallIgnored
        stagedFile(context).delete();
        //noinspection ResultOfMethodCallIgnored
        marker(context).delete();
    }

    private static void validateExtension(String displayName) throws ValidationException {
        if (displayName == null) {
            throw new ValidationException("Selected file has no name to validate.");
        }
        String lower = displayName.toLowerCase(java.util.Locale.ROOT);
        if (!lower.endsWith(".iso") && !lower.endsWith(".rvz") && !lower.endsWith(".wbfs")) {
            throw new ValidationException(
                    "\"" + displayName + "\" doesn't look like a disc image "
                            + "(expected .iso, .rvz, or .wbfs).");
        }
    }

    private static void validateSize(long bytes) throws ValidationException {
        if (bytes < MIN_PLAUSIBLE_BYTES) {
            throw new ValidationException(
                    "Selected file is too small to be a Wii disc image ("
                            + (bytes / (1024 * 1024)) + " MB). Compressed .rvz files "
                            + "still need to be at least roughly disc-sized once you "
                            + "account for typical compression ratios.");
        }
        if (bytes > MAX_PLAUSIBLE_BYTES) {
            throw new ValidationException(
                    "Selected file is larger than any real Wii disc ("
                            + (bytes / (1024 * 1024 * 1024)) + " GB). Please double-check "
                            + "your selection.");
        }
    }

    private static long queryDeclaredSize(ContentResolver resolver, Uri uri) {
        try (android.database.Cursor cursor = resolver.query(uri, null, null, null, null)) {
            if (cursor == null) {
                return -1;
            }
            int sizeIndex = cursor.getColumnIndex(android.provider.OpenableColumns.SIZE);
            if (sizeIndex < 0 || !cursor.moveToFirst() || cursor.isNull(sizeIndex)) {
                return -1;
            }
            return cursor.getLong(sizeIndex);
        } catch (Exception e) {
            return -1;
        }
    }

    private static void writeMarker(Context context, String displayName) throws IOException {
        try (OutputStream out = new FileOutputStream(marker(context))) {
            out.write(displayName.getBytes(java.nio.charset.StandardCharsets.UTF_8));
        }
    }
}
