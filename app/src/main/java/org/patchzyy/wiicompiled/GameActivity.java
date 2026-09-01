package org.patchzyy.wiicompiled;

import android.os.Bundle;
import android.util.Log;
import org.libsdl.app.SDLActivity;

/**
 * Started by ChooserActivity with EXTRA_LIBRARY_NAME set to either
 * "wiicompiled" or "retrorewind" - matching the OUTPUT_NAME CMake gives each
 * product's .so in runtime/cmake/PublicProducts.cmake's Android branch.
 * SDL loads and calls SDL_main() via JNI once getLibraries() below returns
 * and SDLActivity.onCreate() runs (see the parent onCreate() call at the end
 * of this class's own onCreate()).
 */
public class GameActivity extends SDLActivity {

    private static final String TAG = "WiiCompiled";

    private String libraryName = "wiicompiled";

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        String requested = getIntent().getStringExtra(ChooserActivity.EXTRA_LIBRARY_NAME);
        if (requested != null) {
            libraryName = requested;
        } else {
            // Defensive default - GameActivity should never be started
            // without this extra, but fall back to WiiCompiled rather than
            // crash if it somehow is (e.g. activity recreation after process
            // death drops the original Intent in some edge cases).
            Log.w(TAG, "GameActivity started without " + ChooserActivity.EXTRA_LIBRARY_NAME
                    + " extra; defaulting to \"wiicompiled\"");
        }

        // Same ordering requirement as before: extraction must finish before
        // SDLActivity.onCreate() loads the native library and calls
        // SDL_main() (see AssetExtractor's own header comment).
        try {
            AssetExtractor.extractIfNeeded(getApplicationContext());
        } catch (java.io.IOException e) {
            Log.e(TAG, "Asset extraction failed", e);
        }

        super.onCreate(savedInstanceState);
    }

    @Override
    protected String[] getLibraries() {
        return new String[] { libraryName };
    }
}
