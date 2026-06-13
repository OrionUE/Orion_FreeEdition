#!/bin/bash

set -e

LIBRARY_NAME="FAISS"
REPOSITORY_NAME="faiss"

# Informational, for the usage message.
CURRENT_LIBRARY_VERSION=1.13.2

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
OMP_STUB_LOCATION="$UE_MODULE_LOCATION/omp_stub"

GITHUB_REPO="https://github.com/facebookresearch/faiss.git"

BUILD_LOCATION="$UE_MODULE_LOCATION/Intermediate"

INSTALL_INCLUDEDIR=include

INSTALL_LOCATION="$UE_MODULE_LOCATION/Deploy/$REPOSITORY_NAME-$LIBRARY_VERSION"
INSTALL_INCLUDE_LOCATION="$INSTALL_LOCATION/$INSTALL_INCLUDEDIR"
INSTALL_MAC_LOCATION="$INSTALL_LOCATION/Mac"

rm -rf $BUILD_LOCATION
rm -rf $INSTALL_INCLUDE_LOCATION
rm -rf $INSTALL_MAC_LOCATION

mkdir $BUILD_LOCATION
pushd $BUILD_LOCATION > /dev/null

# Download source from GitHub.
BUILD_SOURCE_LOCATION="$BUILD_LOCATION/$REPOSITORY_NAME-$LIBRARY_VERSION"
echo Cloning $LIBRARY_NAME v$LIBRARY_VERSION...
git clone --depth 1 --branch v$LIBRARY_VERSION $GITHUB_REPO $BUILD_SOURCE_LOCATION

# Apply patches to FAISS source.
pushd $BUILD_SOURCE_LOCATION > /dev/null
# 1. Make OpenMP fully optional instead of REQUIRED to avoid extra thread pools.
git apply $UE_MODULE_LOCATION/FAISS_v1.13.2_DisableOpenMP.patch
# 2. Remove dynamic_cast in IO reader detection. UE modules are compiled
#    without RTTI, so dynamic_cast on UE-constructed objects crashes on MSVC.
git apply $UE_MODULE_LOCATION/FAISS_v1.13.2_DisableRTTI.patch
popd > /dev/null

CMAKE_ARGS=(
    -DCMAKE_INSTALL_PREFIX="$INSTALL_LOCATION"
    -DCMAKE_OSX_DEPLOYMENT_TARGET="14.0"
    -DCMAKE_OSX_ARCHITECTURES="arm64;x86_64"
    -DFAISS_ENABLE_GPU=OFF
    -DFAISS_ENABLE_PYTHON=OFF
    -DFAISS_ENABLE_C_API=OFF
    -DFAISS_ENABLE_MKL=OFF
    -DFAISS_ENABLE_EXTRAS=OFF
    -DFAISS_OPT_LEVEL=generic
    -DBUILD_SHARED_LIBS=OFF
    -DBUILD_TESTING=OFF
    -DBLA_VENDOR=Apple
    -DCMAKE_DEBUG_POSTFIX=_d
    -DCMAKE_DISABLE_FIND_PACKAGE_OpenMP=ON
    -DCMAKE_C_FLAGS="-I$OMP_STUB_LOCATION"
    -DCMAKE_CXX_FLAGS="-I$OMP_STUB_LOCATION"
)

NUM_CPU=`sysctl -n hw.ncpu`

echo Configuring build for $LIBRARY_NAME version $LIBRARY_VERSION...
cmake -G "Xcode" $BUILD_SOURCE_LOCATION "${CMAKE_ARGS[@]}"

echo Building $LIBRARY_NAME for Debug...
cmake --build . --config Debug -j$NUM_CPU

echo Installing $LIBRARY_NAME for Debug...
cmake --install . --config Debug

echo Building $LIBRARY_NAME for Release...
cmake --build . --config Release -j$NUM_CPU

echo Installing $LIBRARY_NAME for Release...
cmake --install . --config Release

popd > /dev/null

echo Removing pkgconfig files...
rm -rf "$INSTALL_LOCATION/lib/pkgconfig"
rm -rf "$INSTALL_LOCATION/lib64/pkgconfig"

echo Moving lib directory into place...
INSTALL_LIB_LOCATION="$INSTALL_LOCATION/Mac"
mkdir $INSTALL_LIB_LOCATION

# FAISS may install to lib/ or lib64/ depending on platform
if [ -d "$INSTALL_LOCATION/lib64" ]; then
    mv "$INSTALL_LOCATION/lib64" "$INSTALL_LIB_LOCATION/lib"
elif [ -d "$INSTALL_LOCATION/lib" ]; then
    mv "$INSTALL_LOCATION/lib" "$INSTALL_LIB_LOCATION"
fi

echo Done.
