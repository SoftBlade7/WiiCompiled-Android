package org.patchzyy.wiicompiled;

import android.content.Context;
import android.util.Log;

import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.nio.charset.StandardCharsets;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;
import java.util.ArrayList;
import java.util.List;
import java.util.concurrent.TimeUnit;

/**
 * Orchestrates the on-device translation pipeline (see AGENTS - on-device
 * translation pipeline): nodtool extracts the disc image IsoLibrary already
 * staged, this class locates the resulting main.dol/StaticR.rel by filename
 * (their exact path within nodtool's output tree was not confirmed against
 * a real extraction before this was written, so this searches rather than
 * assumes a fixed layout), verifies them against
 * projects/mkwii/recomp.yml's pinned SHA-256 hashes, then drives
 * Translator.Cli through its translate-recursive / generate-data-init /
 * emit-build-shards chain against a rewritten copy of that manifest whose
 * paths point at this run's actual on-device staging directory rather than
 * the committed manifest's fixed repo-relative paths.
 *
 * nodtool and Translator.Cli's apphost/.so runtime files are invoked
 * directly from Context.getApplicationInfo().nativeLibraryDir, NOT staged
 * from assets into getFilesDir() - a real on-device test confirmed Android's
 * W^X SELinux enforcement denies execute_no_trans (and the equivalent
 * dlopen() permission) for any binary living under assets-derived
 * app-private storage, on any non-rooted Android 10+ device. See
 * app/build.gradle's bundleNodtool/bundleTranslatorCli tasks, which stage
 * these under jniLibs/arm64-v8a/lib*.so instead, so PackageManager extracts
 * them into nativeLibraryDir (a different, execution-permitted SELinux
 * context) at install time - this is Android's own sanctioned mechanism for
 * shipping native executables. Only Translator.Cli's managed .dll files
 * (plain data read by the CoreCLR runtime once it's already running) still
 * come from assets/.
 *
 * Scope: WiiCompiled (Mario Kart Wii) only. RetroRewind's profile in
 * recomp.yml requires an additional Code.pul Kamek mod-patch file that
 * doesn't come from the disc at all - not handled here; RetroRewind still
 * runs from the APK-bundled prebuilt library only.
 *
 * This is Stage 2 of the pipeline (extraction + translation) only. Native
 * compilation of the translated output (Stage 3: CMake/Ninja on-device) and
 * loading the resulting library (Stage 4) are separate, not-yet-built
 * stages - a successful run of this class produces generated/ C++ source,
 * not a runnable library.
 */
final class TranslatorRunner {

    private static final String TAG = "WiiCompiled";

    // Pinned in projects/mkwii/recomp.yml's inputs.dol.sha256/rel.sha256 -
    // duplicated here (not read from the bundled recomp.yml asset) because
    // this check needs to run BEFORE we even construct the rewritten
    // manifest, to fail fast with a clear "wrong game/revision" message
    // rather than let Translator.Cli discover the same mismatch on its own
    // with a less specific error. If projects/mkwii/recomp.yml's pins ever
    // change, these must be updated to match.
    private static final String EXPECTED_DOL_SHA256 =
            "80d18895b39c63bd80f457398bfcbb91b7d16ac116a41a88967e954080155b05";
    private static final String EXPECTED_REL_SHA256 =
            "16d9d146112541fefea701ecb5bc1a496f9d50e4a752fbb5b6778e7c6399f67d";

    interface ProgressListener {
        void onStage(String stageDescription);
        /** Raw stdout/stderr lines from the running subprocess, for a scrolling log view. */
        void onOutputLine(String line);
    }

    static final class TranslationException extends Exception {
        TranslationException(String message) {
            super(message);
        }

        TranslationException(String message, Throwable cause) {
            super(message, cause);
        }
    }

    private TranslatorRunner() {}

    /**
     * Runs the full extract-then-translate pipeline synchronously. Must be
     * called off the main thread - this runs multiple subprocesses and does
     * substantial file I/O, mirroring IsoLibrary.stageFromUri's contract.
     *
     * @return the on-device workspace root under which generated/build_shards/
     *         (and everything else CMake needs) now exists.
     */
    static File runWiiCompiledTranslation(Context context, ProgressListener listener)
            throws TranslationException {
        if (!IsoLibrary.isStaged(context)) {
            throw new TranslationException("No disc image is staged - select one first.");
        }

        File workspaceRoot = new File(context.getFilesDir(), "translation_workspace");
        File extractedDir = new File(workspaceRoot, "extracted");
        File assetsStageDir = new File(workspaceRoot, "Assets");

        deleteRecursive(workspaceRoot);
        if (!workspaceRoot.mkdirs() || !extractedDir.mkdirs() || !assetsStageDir.mkdirs()) {
            throw new TranslationException("Could not create the translation workspace directory.");
        }

        // nodtool and Translator.Cli's apphost + .NET runtime .so files
        // (libhostfxr.so, libhostpolicy.so, libcoreclr.so, etc.) are NOT
        // staged from assets into getFilesDir() here - a real on-device
        // test confirmed Android's W^X SELinux enforcement denies
        // execute_no_trans for any binary living under assets-derived
        // app-private storage ("avc: denied { execute_no_trans } ...
        // tcontext=u:object_r:app_data_file:s0"), and the same restriction
        // blocks the dlopen() calls the apphost makes internally to load
        // hostfxr/hostpolicy/coreclr. Instead, app/build.gradle's
        // bundleNodtool/bundleTranslatorCli tasks stage these as
        // jniLibs/arm64-v8a/lib*.so, which PackageManager extracts at
        // install time into ApplicationInfo.nativeLibraryDir with a
        // different, execution-permitted SELinux context - this is
        // Android's own sanctioned mechanism for shipping native
        // executables, not a workaround. Managed .dll files are still
        // staged from assets/ as before, since they're read as plain data
        // by the CoreCLR runtime once it's running, never dlopen()'d or
        // execve()'d directly.
        String nativeLibDir = context.getApplicationInfo().nativeLibraryDir;
        File nodtool = new File(nativeLibDir, "libnodtool.so");
        File translatorApphost = new File(nativeLibDir, "libtranslator.so");
        if (!nodtool.exists()) {
            throw new TranslationException(
                    "nodtool is missing from this build's native libraries (" + nodtool + ").");
        }
        if (!translatorApphost.exists()) {
            throw new TranslationException(
                    "Translator.Cli is missing from this build's native libraries (" + translatorApphost + ").");
        }
        File translatorDllDir = stageTranslatorManagedFiles(context);

        listener.onStage("Extracting disc image\u2026");
        runProcess(listener, nodtool.getAbsolutePath(), "extract",
                IsoLibrary.stagedFile(context).getAbsolutePath(), extractedDir.getAbsolutePath());

        File dol = findSingleFileByName(extractedDir, "main.dol");
        File rel = findSingleFileByName(extractedDir, "StaticR.rel");
        if (dol == null) {
            throw new TranslationException(
                    "Could not find main.dol anywhere in the extracted disc contents. "
                            + "This may not be a valid Wii disc image.");
        }
        if (rel == null) {
            throw new TranslationException(
                    "Could not find StaticR.rel anywhere in the extracted disc contents. "
                            + "This doesn't look like Mario Kart Wii.");
        }

        listener.onStage("Verifying disc revision\u2026");
        verifyHash(dol, EXPECTED_DOL_SHA256, "main.dol");
        verifyHash(rel, EXPECTED_REL_SHA256, "StaticR.rel");

        // Translator.Cli's manifest resolves inputs.dol.path/inputs.rel.path
        // relative to workspace_root, which itself resolves relative to the
        // manifest file's own directory (see projects/mkwii/recomp.yml -
        // "workspace_root: ../.." resolving to the repo root there, since
        // recomp.yml lives at projects/mkwii/). Copying the located files to
        // a fixed Assets/ layout under our own workspace root, rather than
        // pointing the manifest at nodtool's actual (unconfirmed, possibly
        // deeply nested) extraction paths directly, keeps the rewritten
        // manifest simple and independent of whatever that real layout
        // turns out to be.
        copyFile(dol, new File(assetsStageDir, "main.dol"));
        copyFile(rel, new File(assetsStageDir, "StaticR.rel"));

        stageAsset(context, "translator_project/MAP.txt", new File(workspaceRoot, "MAP.txt"));
        File manifest = writeRewrittenManifest(workspaceRoot);

        String translatorDll = new File(translatorDllDir, "Translator.Cli.dll").getAbsolutePath();
        String apphost = translatorApphost.getAbsolutePath();

        listener.onStage("Translating game code (this takes a while)\u2026");
        runProcess(listener, apphost, translatorDll,
                "translate-recursive", "0x800060A4", "--project", manifest.getAbsolutePath());

        listener.onStage("Generating data section initializer\u2026");
        runProcess(listener, apphost, translatorDll,
                "generate-data-init", "--project", manifest.getAbsolutePath());

        listener.onStage("Emitting native build graph\u2026");
        runProcess(listener, apphost, translatorDll,
                "emit-build-shards", "--project", manifest.getAbsolutePath());

        listener.onStage("Translation complete.");
        return workspaceRoot;
    }

    // ---- Manifest rewriting -------------------------------------------------

    private static File writeRewrittenManifest(File workspaceRoot) throws TranslationException {
        // A minimal, hand-written YAML rewrite rather than pulling in a YAML
        // library on the Android side (Translator.Cli itself depends on
        // YamlDotNet, but that's a .NET dependency, not something available
        // to plain Java here) - deliberately mirrors only the fields
        // TranslatorRunner's three commands actually touch
        // (translate-recursive / generate-data-init / emit-build-shards),
        // sourced from projects/mkwii/recomp.yml's committed values, with
        // only workspace_root and the two input paths rewritten to point at
        // this run's on-device workspace instead of a repo checkout.
        String yaml = ""
                + "schema_version: 1\n"
                + "workspace_root: " + workspaceRoot.getAbsolutePath() + "\n"
                + "\n"
                + "project:\n"
                + "  id: mkwii-rmcp01\n"
                + "  display_name: Mario Kart Wii PAL\n"
                + "  game_id: RMCP01\n"
                + "  region: P\n"
                + "  base_manifest_format: mkwii-recomp-base-manifest\n"
                + "  base_manifest_stem: mkwii_base\n"
                + "\n"
                + "memory:\n"
                + "  base: 0x80000000\n"
                + "  size: 0x01A00000\n"
                + "  sda_base: 0x8038CC00\n"
                + "  sda2_base: 0x8038EFA0\n"
                + "\n"
                + "inputs:\n"
                + "  dol:\n"
                + "    path: Assets/main.dol\n"
                + "    sha256: " + EXPECTED_DOL_SHA256 + "\n"
                + "\n"
                + "  rel:\n"
                + "    path: Assets/StaticR.rel\n"
                + "    load_address: 0x805102E0\n"
                + "    sha256: " + EXPECTED_REL_SHA256 + "\n"
                + "\n"
                + "translation:\n"
                + "  entry_points:\n"
                + "    - 0x800060A4\n"
                + "  function_map:\n"
                + "    path: MAP.txt\n"
                + "  allow_unsupported_instructions: false\n"
                + "\n"
                + "output:\n"
                + "  root: generated\n"
                + "  functions: functions\n"
                + "  runtime_config: RuntimeConfig.h\n"
                + "  data_initializer: data_sections_init.cpp\n"
                + "  base_manifest: build/base/mkwii_base_manifest.json\n";
        // Deliberately omits runtime.native_registration_root/
        // native_abi_directories and the profiles.retro-rewind block: the
        // former point at runtime/src, which does not exist under this
        // on-device workspace (the APK's compiled runtime is separate from
        // this translation workspace - see Stage 3, native compilation,
        // which is not yet built and will need to reconcile the two), and
        // the latter is out of scope here (see this class's header comment
        // on RetroRewind's separate Code.pul requirement).

        File manifestFile = new File(workspaceRoot, "recomp.yml");
        try (OutputStream out = new FileOutputStream(manifestFile)) {
            out.write(yaml.getBytes(StandardCharsets.UTF_8));
        } catch (IOException e) {
            throw new TranslationException("Could not write the translation manifest.", e);
        }
        return manifestFile;
    }

    // ---- Asset staging --------------------------------------------------------

    /**
     * Stages Translator.Cli's managed files (Translator.Cli.dll,
     * Translator.Core.dll, .deps.json, .runtimeconfig.json, etc.) from
     * assets/translator/ into filesDir. Does NOT include the apphost or any
     * .so runtime files - those are read directly from
     * ApplicationInfo.nativeLibraryDir instead (see this class's header
     * comment and app/build.gradle's bundleTranslatorCli task), since they
     * would hit Android's W^X SELinux enforcement if staged here. Plain
     * managed DLLs are just data the CoreCLR runtime reads once it's
     * already running, so W^X has no opinion about them.
     */
    private static File stageTranslatorManagedFiles(Context context) throws TranslationException {
        File dest = new File(context.getFilesDir(), "tools/translator");
        try {
            copyAssetTree(context, "translator", dest);
        } catch (IOException e) {
            throw new TranslationException("Could not stage Translator.Cli's managed files.", e);
        }
        return dest;
    }

    private static File findSingleFileByName(File root, String name) {
        List<File> matches = new ArrayList<>();
        collectFilesByName(root, name, matches);
        return matches.isEmpty() ? null : matches.get(0);
    }

    private static void collectFilesByName(File dir, String name, List<File> out) {
        File[] children = dir.listFiles();
        if (children == null) {
            return;
        }
        for (File child : children) {
            if (child.isDirectory()) {
                collectFilesByName(child, name, out);
            } else if (child.getName().equalsIgnoreCase(name)) {
                out.add(child);
            }
        }
    }

    private static File stageAsset(Context context, String assetPath, File dest) throws TranslationException {
        try {
            File parent = dest.getParentFile();
            if (parent != null && !parent.exists() && !parent.mkdirs()) {
                throw new IOException("Could not create directory: " + parent);
            }
            try (InputStream in = context.getAssets().open(assetPath);
                 OutputStream out = new FileOutputStream(dest)) {
                byte[] buffer = new byte[64 * 1024];
                int read;
                while ((read = in.read(buffer)) != -1) {
                    out.write(buffer, 0, read);
                }
            }
        } catch (IOException e) {
            throw new TranslationException("Could not stage bundled asset: " + assetPath, e);
        }
        return dest;
    }

    private static void copyAssetTree(Context context, String assetPath, File destDir) throws IOException {
        String[] entries = context.getAssets().list(assetPath);
        if (entries == null || entries.length == 0) {
            File parent = destDir.getParentFile();
            if (parent != null && !parent.exists() && !parent.mkdirs()) {
                throw new IOException("Could not create directory: " + parent);
            }
            try (InputStream in = context.getAssets().open(assetPath);
                 OutputStream out = new FileOutputStream(destDir)) {
                byte[] buffer = new byte[64 * 1024];
                int read;
                while ((read = in.read(buffer)) != -1) {
                    out.write(buffer, 0, read);
                }
            }
            return;
        }
        if (!destDir.exists() && !destDir.mkdirs()) {
            throw new IOException("Could not create directory: " + destDir);
        }
        for (String entry : entries) {
            copyAssetTree(context, assetPath + "/" + entry, new File(destDir, entry));
        }
    }

    private static void copyFile(File source, File dest) throws TranslationException {
        try (InputStream in = new java.io.FileInputStream(source);
             OutputStream out = new FileOutputStream(dest)) {
            byte[] buffer = new byte[64 * 1024];
            int read;
            while ((read = in.read(buffer)) != -1) {
                out.write(buffer, 0, read);
            }
        } catch (IOException e) {
            throw new TranslationException("Could not copy " + source.getName(), e);
        }
    }

    // ---- Hashing --------------------------------------------------------------

    private static void verifyHash(File file, String expectedHex, String label) throws TranslationException {
        String actual;
        try {
            actual = sha256(file);
        } catch (IOException e) {
            throw new TranslationException("Could not hash " + label, e);
        }
        if (!expectedHex.equalsIgnoreCase(actual)) {
            throw new TranslationException(
                    label + " does not match the expected Mario Kart Wii PAL revision "
                            + "(hash mismatch - wrong game, wrong region, or a modified disc image).");
        }
    }

    private static String sha256(File file) throws IOException {
        try {
            MessageDigest digest = MessageDigest.getInstance("SHA-256");
            try (InputStream in = new java.io.FileInputStream(file)) {
                byte[] buffer = new byte[1024 * 1024];
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
            throw new IOException("SHA-256 unavailable", e);
        }
    }

    // ---- Process execution ------------------------------------------------------

    private static void runProcess(ProgressListener listener, String... command) throws TranslationException {
        Log.i(TAG, "Running: " + String.join(" ", command));
        Process process;
        try {
            ProcessBuilder builder = new ProcessBuilder(command);
            builder.redirectErrorStream(true);
            process = builder.start();
        } catch (IOException e) {
            throw new TranslationException("Could not start process: " + command[0], e);
        }

        StringBuilder tail = new StringBuilder();
        try (java.io.BufferedReader reader = new java.io.BufferedReader(
                new java.io.InputStreamReader(process.getInputStream(), StandardCharsets.UTF_8))) {
            String line;
            while ((line = reader.readLine()) != null) {
                Log.i(TAG, line);
                if (listener != null) {
                    listener.onOutputLine(line);
                }
                // Keep only the last ~4000 chars for the eventual error
                // message, so a runaway process doesn't blow up memory here.
                tail.append(line).append('\n');
                if (tail.length() > 4000) {
                    tail.delete(0, tail.length() - 4000);
                }
            }
        } catch (IOException e) {
            throw new TranslationException("Error reading output from: " + command[0], e);
        }

        int exitCode;
        try {
            if (!process.waitFor(30, TimeUnit.MINUTES)) {
                process.destroyForcibly();
                throw new TranslationException(command[0] + " timed out after 30 minutes.");
            }
            exitCode = process.exitValue();
        } catch (InterruptedException e) {
            Thread.currentThread().interrupt();
            throw new TranslationException("Interrupted while waiting for: " + command[0], e);
        }

        if (exitCode != 0) {
            throw new TranslationException(
                    command[0] + " exited with code " + exitCode + ":\n" + tail);
        }
    }

    private static void deleteRecursive(File file) {
        if (file.isDirectory()) {
            File[] children = file.listFiles();
            if (children != null) {
                for (File child : children) {
                    deleteRecursive(child);
                }
            }
        }
        //noinspection ResultOfMethodCallIgnored
        file.delete();
    }
}
