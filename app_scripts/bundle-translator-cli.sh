#!/usr/bin/env bash
# Publishes Translator.Cli as a self-contained linux-bionic-arm64 binary,
# then splits its output: every real .so (the renamed apphost plus the
# .NET runtime's own libhostfxr.so/libhostpolicy.so/libcoreclr.so/etc, all
# dlopen()'d by the apphost at startup) goes to jniLibs/arm64-v8a/, and
# everything else (managed .dll files, .json config - plain data the
# CoreCLR runtime reads once it's already running) goes to assets/translator/.
#
# A standalone script file rather than an inline Groovy triple-quoted string
# in app/build.gradle - see bundle-nodtool.sh's header comment for why.
#
# Usage: bundle-translator-cli.sh <translator-csproj-path> <publish-dir> <assets-dir> <jniLibs-dir>
set -eu

TRANSLATOR_PROJECT="$1"
PUBLISH_DIR="$2"
ASSETS_DIR="$3"
JNILIBS_DIR="$4"

rm -rf "$PUBLISH_DIR"
mkdir -p "$PUBLISH_DIR" "$ASSETS_DIR" "$JNILIBS_DIR"

dotnet publish "$TRANSLATOR_PROJECT" \
    -c Release \
    -r linux-bionic-arm64 \
    --self-contained true \
    -o "$PUBLISH_DIR"

test -f "$PUBLISH_DIR/Translator.Cli"

echo "--- Publish output directory contents, before splitting ---"
ls -la "$PUBLISH_DIR"

# Move every real .so in the publish output to jniLibs - dlopen()'d by the
# apphost/hostfxr chain at runtime, must not be left under assets/.
find "$PUBLISH_DIR" -maxdepth 1 -type f -name '*.so' -print0 |
while IFS= read -r -d '' so; do
    cp "$so" "$JNILIBS_DIR/"
done

# The apphost itself has no .so extension or "lib" prefix by default
# (dotnet publish names it after the project, "Translator.Cli" on
# non-Windows) - rename it to fit AGP's jniLibs naming convention so
# PackageManager recognizes and extracts it into nativeLibraryDir.
cp "$PUBLISH_DIR/Translator.Cli" "$JNILIBS_DIR/libtranslator.so"
chmod +x "$JNILIBS_DIR"/*.so

# Everything else (managed .dll files, .json config, etc.) stays under
# assets/ as plain data files.
rm -rf "$ASSETS_DIR"
mkdir -p "$ASSETS_DIR"
cp -r "$PUBLISH_DIR"/* "$ASSETS_DIR/"
rm -f "$ASSETS_DIR/Translator.Cli" "$ASSETS_DIR"/*.so

echo "--- Confirming jniLibs output ---"
ls -la "$JNILIBS_DIR"
echo "--- Confirming assets output (should have no .so files, no bare Translator.Cli) ---"
ls -la "$ASSETS_DIR"
