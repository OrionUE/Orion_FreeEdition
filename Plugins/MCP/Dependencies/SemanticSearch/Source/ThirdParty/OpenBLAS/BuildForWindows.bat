@echo off
setlocal

rem Copyright Epic Games, Inc. All Rights Reserved.

set LIBRARY_NAME=OpenBLAS

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

set GITHUB_REPO=https://github.com/OpenMathLib/OpenBLAS.git

set BUILD_LOCATION=%UE_MODULE_LOCATION%\Intermediate

set INSTALL_INCLUDEDIR=include

set INSTALL_LOCATION=%UE_MODULE_LOCATION%\Deploy\OpenBLAS-%LIBRARY_VERSION%
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
echo Cloning %LIBRARY_NAME% v%LIBRARY_VERSION%...
git clone --depth 1 --branch v%LIBRARY_VERSION% %GITHUB_REPO% OpenBLAS-%LIBRARY_VERSION%
if %errorlevel% neq 0 exit /B %errorlevel%

set SOURCE_LOCATION=%BUILD_LOCATION%\OpenBLAS-%LIBRARY_VERSION%

rem Rename DllMain to OpenBLASDllMain in memory.c to avoid LNK2005 when the
rem static library is linked into a DLL. Initialization still runs via
rem .CRT$XLB TLS callbacks. (Upstream fix: github.com/OpenMathLib/OpenBLAS/pull/5623)
pushd %SOURCE_LOCATION%
git apply --ignore-whitespace %UE_MODULE_LOCATION%\OpenBLAS_v0.3.31_RenameDllMain.patch
if %errorlevel% neq 0 exit /B %errorlevel%
popd

set NUM_CPU=8

rem Build OpenBLAS without OpenMP but with threading enabled.
rem Thread count is controlled at runtime via openblas_set_num_threads()
rem (set to 1 by default, raised temporarily for heavy BLAS operations).

echo Configuring build for %LIBRARY_NAME% version %LIBRARY_VERSION%...
cmake -G "Visual Studio 17 2022" %SOURCE_LOCATION%^
    -T "version=14.38"^
    -A %ARCH_NAME%^
    -DCMAKE_INSTALL_PREFIX="%INSTALL_LOCATION%"^
    -DBUILD_SHARED_LIBS=OFF^
    -DBUILD_WITHOUT_LAPACK=OFF^
    -DBUILD_WITHOUT_CBLAS=OFF^
    -DUSE_OPENMP=OFF^
    -DUSE_THREAD=ON^
    -DBUILD_TESTING=OFF^
    -DCMAKE_DEBUG_POSTFIX=_d^
    -DCMAKE_INSTALL_SYSTEM_RUNTIME_LIBS_SKIP=ON
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

echo Moving lib directory into place...
set INSTALL_LIB_DIR=%COMPILER_VERSION_NAME%\%ARCH_NAME%
set INSTALL_LIB_LOCATION=%INSTALL_LOCATION%\%INSTALL_LIB_DIR%
mkdir %INSTALL_LIB_LOCATION%
move "%INSTALL_LOCATION%\lib" "%INSTALL_LIB_LOCATION%"

echo Done.

goto :eof

:usage
echo Build %LIBRARY_NAME% for use with Unreal Engine on Windows
echo.
echo Usage: %BUILD_SCRIPT_NAME% ^<version^> ^<architecture: x64 or ARM64^>
echo.
echo Example: %BUILD_SCRIPT_NAME% 0.3.31 x64
exit /B 1

endlocal
