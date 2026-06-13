#!/bin/bash

set -e

LIBRARY_NAME="OpenBLAS"

# Informational, for the usage message.
CURRENT_LIBRARY_VERSION=0.3.31

BUILD_SCRIPT_NAME="$(basename $BASH_SOURCE)"
BUILD_SCRIPT_DIR=`cd $(dirname "$BASH_SOURCE"); pwd`

UsageAndExit()
{
    echo "Build $LIBRARY_NAME for use with Unreal Engine on Mac"
    echo
    echo "Usage:"
    echo
    echo "    $BUILD_SCRIPT_NAME <$LIBRARY_NAME Version>"
    echo
    echo "Usage examples:"
    echo
    echo "    $BUILD_SCRIPT_NAME $CURRENT_LIBRARY_VERSION"
    echo "      -- Installs $LIBRARY_NAME version $CURRENT_LIBRARY_VERSION."
    echo
    exit 1
}

# Get version from arguments.
LIBRARY_VERSION=$1
if [ -z "$LIBRARY_VERSION" ]
then
    UsageAndExit
fi

UE_MODULE_LOCATION=$BUILD_SCRIPT_DIR

GITHUB_REPO="https://github.com/OpenMathLib/OpenBLAS.git"

BUILD_LOCATION="$UE_MODULE_LOCATION/Intermediate"

INSTALL_LOCATION="$UE_MODULE_LOCATION/Deploy/OpenBLAS-$LIBRARY_VERSION"
INSTALL_INCLUDE_LOCATION="$INSTALL_LOCATION/include"
INSTALL_MAC_LOCATION="$INSTALL_LOCATION/Mac"

rm -rf $BUILD_LOCATION
rm -rf $INSTALL_INCLUDE_LOCATION
rm -rf $INSTALL_MAC_LOCATION

mkdir $BUILD_LOCATION
pushd $BUILD_LOCATION > /dev/null

# Download source from GitHub.
echo Cloning $LIBRARY_NAME v$LIBRARY_VERSION...
git clone --depth 1 --branch v$LIBRARY_VERSION $GITHUB_REPO OpenBLAS-$LIBRARY_VERSION

SOURCE_LOCATION="$BUILD_LOCATION/OpenBLAS-$LIBRARY_VERSION"

# Build OpenBLAS without OpenMP but with threading enabled.
# Thread count is controlled at runtime via openblas_set_num_threads()
# (set to 1 by default, raised temporarily for heavy BLAS operations).
# Uses Unix Makefiles -- OpenBLAS's Xcode project has issues with test
# target linkage. Only the static lib target is built (skips tests).

NUM_CPU=`sysctl -n hw.ncpu`

CMAKE_ARGS=(
    -DCMAKE_INSTALL_PREFIX="$INSTALL_LOCATION"
    -DCMAKE_OSX_DEPLOYMENT_TARGET="14.0"
    -DCMAKE_OSX_ARCHITECTURES="arm64"
    -DBUILD_SHARED_LIBS=OFF
    -DBUILD_WITHOUT_LAPACK=OFF
    -DBUILD_WITHOUT_CBLAS=OFF
    -DUSE_OPENMP=OFF
    -DUSE_THREAD=ON
    -DBUILD_TESTING=OFF
)

echo Configuring build for $LIBRARY_NAME version $LIBRARY_VERSION...
cmake -G "Unix Makefiles" $SOURCE_LOCATION -DCMAKE_BUILD_TYPE=Release "${CMAKE_ARGS[@]}"

echo Building $LIBRARY_NAME for Release...
cmake --build . --target openblas_static -j$NUM_CPU

echo Installing $LIBRARY_NAME for Release...
cmake --install . --prefix "$INSTALL_LOCATION"

popd > /dev/null

echo Removing pkgconfig and cmake config files...
rm -rf "$INSTALL_LOCATION/lib/pkgconfig"
rm -rf "$INSTALL_LOCATION/lib/cmake"

echo Moving lib directory into place...
mkdir -p $INSTALL_MAC_LOCATION
mv "$INSTALL_LOCATION/lib" "$INSTALL_MAC_LOCATION"

echo Done.
