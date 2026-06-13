@echo off
setlocal

rem Copyright Epic Games, Inc. All Rights Reserved.

set LIBRARY_NAME=FAISS
set REPOSITORY_NAME=faiss

set BUILD_SCRIPT_NAME=%~n0%~x0
set BUILD_SCRIPT_LOCATION=%~dp0

rem Get version and architecture from arguments.
set LIBRARY_VERSION=%1
if [%LIBRARY_VERSION%]==[] goto usage

set ARCH_NAME=%2
if [%ARCH_NAME%]==[] goto usage

rem Set as VS2015 for backwards compatibility even though VS2022 is used
rem when building.
set COMPILER_VERSION_NAME=VS2015

set UE_MODULE_LOCATION=%BUILD_SCRIPT_LOCATION%
set OMP_STUB_LOCATION=%UE_MODULE_LOCATION%\omp_stub
set UE_SOURCE_THIRD_PARTY_LOCATION=%UE_MODULE_LOCATION%\..

rem OpenBLAS must be built first. Point FAISS at the OpenBLAS Deploy directory.
set OPENBLAS_LOCATION=%UE_SOURCE_THIRD_PARTY_LOCATION%\OpenBLAS\Deploy\OpenBLAS-0.3.31
set OPENBLAS_INCLUDE_LOCATION=%OPENBLAS_LOCATION%\include
set OPENBLAS_LIB_LOCATION=%OPENBLAS_LOCATION%\%COMPILER_VERSION_NAME%\%ARCH_NAME%\lib\openblas.lib

set GITHUB_REPO=https://github.com/facebookresearch/faiss.git

set BUILD_LOCATION=%UE_MODULE_LOCATION%\Intermediate

set INSTALL_INCLUDEDIR=include

set INSTALL_LOCATION=%UE_MODULE_LOCATION%\Deploy\%REPOSITORY_NAME%-%LIBRARY_VERSION%
set INSTALL_INCLUDE_LOCATION=%INSTALL_LOCATION%\%INSTALL_INCLUDEDIR%
set INSTALL_WIN_ARCH_LOCATION=%INSTALL_LOCATION%\%COMPILER_VERSION_NAME%\%ARCH_NAME%

if exist %BUILD_LOCATION% (
    rmdir %BUILD_LOCATION% /S /Q)
if exist %INSTALL_INCLUDE_LOCATION% (
    rmdir %INSTALL_INCLUDE_LOCATION% /S /Q)
if exist %INSTALL_WIN_ARCH_LOCATION% (
    rmdir %INSTALL_WIN_ARCH_LOCATION% /S /Q)

mkdir %BUILD_LOCATION%
pushd %BUILD_LOCATION%

rem Download source from GitHub.
set BUILD_SOURCE_LOCATION=%BUILD_LOCATION%\%REPOSITORY_NAME%-%LIBRARY_VERSION%
echo Cloning %LIBRARY_NAME% v%LIBRARY_VERSION%...
git clone --depth 1 --branch v%LIBRARY_VERSION% %GITHUB_REPO% %BUILD_SOURCE_LOCATION%
if %errorlevel% neq 0 exit /B %errorlevel%

rem Apply patches to FAISS source.
pushd %BUILD_SOURCE_LOCATION%
rem 1. Make OpenMP fully optional instead of REQUIRED to avoid extra thread pools.
git apply --ignore-whitespace %UE_MODULE_LOCATION%\FAISS_v1.13.2_DisableOpenMP.patch
if %errorlevel% neq 0 exit /B %errorlevel%
rem 2. Remove dynamic_cast in IO reader detection. UE modules are compiled
rem    without RTTI, so dynamic_cast on UE-constructed objects crashes on MSVC.
git apply --ignore-whitespace %UE_MODULE_LOCATION%\FAISS_v1.13.2_DisableRTTI.patch
if %errorlevel% neq 0 exit /B %errorlevel%
popd

set NUM_CPU=8

echo Configuring build for %LIBRARY_NAME% version %LIBRARY_VERSION%...
cmake -G "Visual Studio 17 2022" %BUILD_SOURCE_LOCATION%^
    -T "version=14.38"^
    -A %ARCH_NAME%^
    -DCMAKE_INSTALL_PREFIX="%INSTALL_LOCATION%"^
    -DFAISS_ENABLE_GPU=OFF^
    -DFAISS_ENABLE_PYTHON=OFF^
    -DFAISS_ENABLE_C_API=OFF^
    -DFAISS_ENABLE_MKL=OFF^
    -DFAISS_ENABLE_EXTRAS=OFF^
    -DFAISS_OPT_LEVEL=generic^
    -DBUILD_SHARED_LIBS=OFF^
    -DBUILD_TESTING=OFF^
    -DBLAS_LIBRARIES="%OPENBLAS_LIB_LOCATION%"^
    -DLAPACK_LIBRARIES="%OPENBLAS_LIB_LOCATION%"^
    -DCMAKE_DEBUG_POSTFIX=_d^
    -DCMAKE_DISABLE_FIND_PACKAGE_OpenMP=ON^
    -DCMAKE_INSTALL_SYSTEM_RUNTIME_LIBS_SKIP=ON^
    -DCMAKE_C_FLAGS="/I\"%OMP_STUB_LOCATION%\""^
    -DCMAKE_CXX_FLAGS="/I\"%OMP_STUB_LOCATION%\""
if %errorlevel% neq 0 exit /B %errorlevel%

echo Building %LIBRARY_NAME% for Debug...
cmake --build . --config Debug -j%NUM_CPU%
if %errorlevel% neq 0 exit /B %errorlevel%

echo Installing %LIBRARY_NAME% for Debug...
cmake --install . --config Debug
if %errorlevel% neq 0 exit /B %errorlevel%

echo Building %LIBRARY_NAME% for Release...
cmake --build . --config Release -j%NUM_CPU%
if %errorlevel% neq 0 exit /B %errorlevel%

echo Installing %LIBRARY_NAME% for Release...
cmake --install . --config Release
if %errorlevel% neq 0 exit /B %errorlevel%

popd

echo Removing pkgconfig files...
if exist "%INSTALL_LOCATION%\lib\pkgconfig" rmdir /S /Q "%INSTALL_LOCATION%\lib\pkgconfig"
if exist "%INSTALL_LOCATION%\lib64\pkgconfig" rmdir /S /Q "%INSTALL_LOCATION%\lib64\pkgconfig"

echo Moving lib directory into place...
set INSTALL_LIB_DIR=%COMPILER_VERSION_NAME%\%ARCH_NAME%
set INSTALL_LIB_LOCATION=%INSTALL_LOCATION%\%INSTALL_LIB_DIR%
mkdir %INSTALL_LIB_LOCATION%

if exist "%INSTALL_LOCATION%\lib64" (
    move "%INSTALL_LOCATION%\lib64" "%INSTALL_LIB_LOCATION%\lib"
) else (
    move "%INSTALL_LOCATION%\lib" "%INSTALL_LIB_LOCATION%"
)

echo Done.

goto :eof

:usage
echo Build %LIBRARY_NAME% for use with Unreal Engine on Windows
echo.
echo Usage: %BUILD_SCRIPT_NAME% ^<version^> ^<architecture: x64 or ARM64^>
echo.
echo Example: %BUILD_SCRIPT_NAME% 1.13.2 x64
echo.
echo NOTE: OpenBLAS must be built first. Run:
echo   ..\OpenBLAS\BuildForWindows.bat 0.3.31 %ARCH_NAME%
exit /B 1

endlocal
