package org.patchzyy.wiicompiled;

import android.os.Bundle;
import android.util.Log;
import org.libsdl.app.SDLActivity;

/**
 * SDL3 loads and calls SDL_main() via JNI once this Activity's native library
 * is loaded (see SDLActivity.onCreate() -> System.loadLibrary()). Extraction
 * must finish before that happens, since the native side expects
 * wii_bootstrap/, dsp_coef.bin and initial_pipeline_cache.db to already exist
 * as normal files (see AssetExtractor and runtime/cmake/PublicProducts.cmake's
 * POST_BUILD copy steps, which this extraction step replicates for Android).
 */
public class MainActivity extends SDLActivity {

    private static final String TAG = "WiiCompiled";

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        // Deliberately synchronous: SDLActivity.onCreate() (called below) loads
        // the native library and calls SDL_main() on its own thread almost
        // immediately afterward, so there is no safe "extract in the
        // background and signal native code when ready" point without
        // modifying SDL's own glue. A first-launch extraction is one-time and
        // bounded by asset size, not ongoing I/O, so a brief synchronous delay
        // here (shown as a blank window, not an ANR - see AssetExtractor) is
        // preferable to touching SDL's startup sequence.
        try {
            AssetExtractor.extractIfNeeded(getApplicationContext());
        } catch (java.io.IOException e) {
            Log.e(TAG, "Asset extraction failed", e);
            // Native code will fail its own file-existence checks (see the
            // FATAL_ERROR guards in runtime/cmake/PublicProducts.cmake mirrored
            // at runtime) with a clearer message than continuing here would
            // produce, so this is intentionally not treated as fatal at this
            // layer.
        }

        super.onCreate(savedInstanceState);
    }

    /**
     * SDL's default JNI library-name lookup expects "main" (i.e. libmain.so)
     * unless overridden. WiiCompiled/RetroRewind are two separate CMake
     * targets (see runtime/cmake/PublicProducts.cmake); only one product .so
     * is packaged per build variant. This override is the seam if that needs
     * to change to select between them at runtime instead.
     */
    @Override
    protected String[] getLibraries() {
        return new String[] { "main" };
    }
}
