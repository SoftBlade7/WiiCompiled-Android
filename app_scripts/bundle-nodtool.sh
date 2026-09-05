#!/usr/bin/env bash
# Cross-compiles nodtool (github.com/encounter/nod) for aarch64-linux-android
# via cargo-ndk, and stages the result as jniLibs/arm64-v8a/libnodtool.so.
#
# A standalone script file rather than an inline Groovy triple-quoted string
# in app/build.gradle: the inline version silently failed partway through on
# real CI runs (cargo ndk build completed successfully, but every line after
# it - cp, chmod, the version marker write - never ran and never appeared in
# the log, with no reported error either from bash or from Gradle). The
# leading suspect is nested-quote collision between Groovy's own "${...}"
# GString interpolation and the escaped \$(...) / \$marker bash
# constructs that were living in the same triple-quoted string - a script
# file sidesteps that whole class of problem, since Gradle's Exec task just
# passes it straight to bash with no string-literal interpretation in between.
#
# Usage: bundle-nodtool.sh <nodtool-version> <nod-source-cache-dir> <jniLibs-dir> <android-ndk-home>
set -eu

NODTOOL_VERSION="$1"
NOD_SOURCE_CACHE="$2"
JNILIBS_DIR="$3"
NDK_HOME="$4"

if [ -z "$NDK_HOME" ]; then
    echo "ANDROID_NDK_HOME is not set and android.ndkDirectory could not resolve one - cannot cross-compile nodtool." >&2
    exit 1
fi

mkdir -p "$JNILIBS_DIR"
marker="$JNILIBS_DIR/.nodtool-version"
if [ -f "$marker" ] && [ "$(cat "$marker")" = "$NODTOOL_VERSION" ] && [ -x "$JNILIBS_DIR/libnodtool.so" ]; then
    echo "nodtool $NODTOOL_VERSION already built and staged, skipping."
    exit 0
fi

if [ ! -d "$NOD_SOURCE_CACHE/.git" ]; then
    rm -rf "$NOD_SOURCE_CACHE"
    git clone --depth 1 --branch "$NODTOOL_VERSION" https://github.com/encounter/nod.git "$NOD_SOURCE_CACHE"
fi

cd "$NOD_SOURCE_CACHE"
ANDROID_NDK_HOME="$NDK_HOME" cargo ndk -t arm64-v8a build --release -p nodtool

echo "--- Confirming cargo-ndk's actual build output before staging it ---"
test -f "$NOD_SOURCE_CACHE/target/aarch64-linux-android/release/nodtool"
file "$NOD_SOURCE_CACHE/target/aarch64-linux-android/release/nodtool"

cp "$NOD_SOURCE_CACHE/target/aarch64-linux-android/release/nodtool" "$JNILIBS_DIR/libnodtool.so"
chmod +x "$JNILIBS_DIR/libnodtool.so"
echo "$NODTOOL_VERSION" > "$marker"

echo "--- Confirming the staged file is actually there ---"
ls -la "$JNILIBS_DIR/libnodtool.so"
