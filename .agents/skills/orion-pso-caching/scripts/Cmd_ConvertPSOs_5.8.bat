@echo off
setlocal

set "SCRIPT_DIR=%~dp0"
powershell -NoProfile -ExecutionPolicy Bypass -File "%SCRIPT_DIR%Convert-PSOs-5.8.ps1" %*
exit /b %ERRORLEVEL%
