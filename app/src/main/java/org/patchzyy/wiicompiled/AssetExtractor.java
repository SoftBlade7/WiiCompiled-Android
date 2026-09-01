package org.patchzyy.wiicompiled;

import android.content.Context;
import android.content.res.AssetManager;
import android.util.Log;

import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;

/**
 * Android equivalent of WiiCompiled-Setup.exe's install-time file staging:
 * copies wii_bootstrap/, dsp_coef.bin and initial_pipeline_cache.db out of the
 * read-only APK assets/ archive into Context.getFilesDir(), a normal writable
 * directory, so runtime code can keep using ordinary file I/O against these
 * paths exactly as it does on desktop (see runtime/cmake/PublicProducts.cmake's
 * POST_BUILD copy_directory/copy_if_different steps, which this mirrors).
 *
 * Runs once; a version-stamped marker file prevents re-copying (and clobbering
 * a runtime-modified initial_pipeline_cache.db) on subsequent launches.
 */
final class AssetExtractor {

    private static final String TAG = "WiiCompiled";

    // Bump when the bundled asset set changes (new DSP ROM, updated bootstrap
    // payload, etc.) so upgrades re-extract instead of keeping stale files.
    // Mirrors the role of the SHA256 check in PublicProducts.cmake, moved to
    // runtime since Android has no build-time file staging step of its own.
    private static final int ASSET_VERSION = 1;
    private static final String MARKER_FILE = ".asset_version";

    // Matches PublicProducts.cmake's MKW_DSP_COEFFICIENT_ROM_SHA256 check.
    private static final String DSP_COEF_SHA256 =
            "d7741279c2e8ec5c5fb318f8fbdd6de6bf583520d288e836a5383233a4238179";

    private AssetExtractor() {}

    static void extractIfNeeded(Context context) throws IOException {
        File filesDir = context.getFilesDir();
        File marker = new File(filesDir, MARKER_FILE);

        if (marker.exists() && readMarkerVersion(marker) == ASSET_VERSION) {
            Log.i(TAG, "Game assets already extracted (version " + ASSET_VERSION + "), skipping.");
            return;
        }

        Log.i(TAG, "Extracting game assets (version " + ASSET_VERSION + ")...");
        AssetManager assets = context.getAssets();

        // app/build.gradle's copyGameAssets task stages these under
        // src/main/assets/game/ at build time from runtime/assets/, matching
        // the desktop POST_BUILD layout (wii_bootstrap/, dsp_coef.bin,
        // initial_pipeline_cache.db side by side).
        copyAssetTree(assets, "game/wii_bootstrap", new File(filesDir, "wii_bootstrap"));
        copyAssetFile(assets, "game/dsp_coef.bin", new File(filesDir, "dsp_coef.bin"));
        copyAssetFile(assets, "game/initial_pipeline_cache.db", new File(filesDir, "initial_pipeline_cache.db"));

        String actualHash = sha256(new File(filesDir, "dsp_coef.bin"));
        if (!DSP_COEF_SHA256.equals(actualHash)) {
            throw new IOException("Wii DSP coefficient ROM hash mismatch after extraction: " + actualHash);
        }

        writeMarkerVersion(marker, ASSET_VERSION);
        Log.i(TAG, "Asset extraction complete.");
    }

    private static void copyAssetTree(AssetManager assets, String assetPath, File destDir) throws IOException {
        String[] entries = assets.list(assetPath);
        if (entries == null || entries.length == 0) {
            // Leaf file, not a directory.
            copyAssetFile(assets, assetPath, destDir);
            return;
        }
        if (!destDir.exists() && !destDir.mkdirs()) {
            throw new IOException("Could not create directory: " + destDir);
        }
        for (String entry : entries) {
            copyAssetTree(assets, assetPath + "/" + entry, new File(destDir, entry));
        }
    }

    private static void copyAssetFile(AssetManager assets, String assetPath, File dest) throws IOException {
        File parent = dest.getParentFile();
        if (parent != null && !parent.exists() && !parent.mkdirs()) {
            throw new IOException("Could not create directory: " + parent);
        }
        try (InputStream in = assets.open(assetPath);
             OutputStream out = new FileOutputStream(dest)) {
            byte[] buffer = new byte[64 * 1024];
            int read;
            while ((read = in.read(buffer)) != -1) {
                out.write(buffer, 0, read);
            }
        }
    }

    private static String sha256(File file) throws IOException {
        try {
            MessageDigest digest = MessageDigest.getInstance("SHA-256");
            try (InputStream in = new java.io.FileInputStream(file)) {
                byte[] buffer = new byte[64 * 1024];
                int read;
                while ((read = in.read(buffer)) != -1) {
                    digest.update(buffer, 0, read);
                }
            }
            StringBuilder sb = new StringBuilder();
            for (byte b : digest.digest()) {
                sb.append(String.format("%02x", b));
            }
            return sb.toString();
        } catch (NoSuchAlgorithmException e) {
            // SHA-256 is guaranteed present on every Android API level this
            // project targets; this is unreachable in practice.
            throw new IOException("SHA-256 unavailable", e);
        }
    }

    private static int readMarkerVersion(File marker) {
        try {
            String content = new String(java.nio.file.Files.readAllBytes(marker.toPath())).trim();
            return Integer.parseInt(content);
        } catch (Exception e) {
            return -1;
        }
    }

    private static void writeMarkerVersion(File marker, int version) throws IOException {
        try (OutputStream out = new FileOutputStream(marker)) {
            out.write(String.valueOf(version).getBytes());
        }
    }
}
