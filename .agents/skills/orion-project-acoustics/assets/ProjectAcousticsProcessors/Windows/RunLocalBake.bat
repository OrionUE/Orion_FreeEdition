REM Execute acoustics bake locally
for /f "tokens=2 delims==" %%a in ('wmic OS Get localdatetime /value') do set "dt=%%a"
set "YYYY=%dt:~0,4%" & set "MM=%dt:~4,2%" & set "DD=%dt:~6,2%"
set "HH=%dt:~8,2%" & set "MN=%dt:~10,2%"
md "%YYYY%%MM%%DD%-%HH%%MN%"
copy "*_config.xml" %YYYY%%MM%%DD%-%HH%%MN%
copy "*.vox" %YYYY%%MM%%DD%-%HH%%MN%
for %%i in (*_config.xml) do Triton.LocalProcessor.exe --configfile %%i --WorkingDir %YYYY%%MM%%DD%-%HH%%MN%
REM Clean up
del "%YYYY%%MM%%DD%-%HH%%MN%\*.enc"
REM .ACE file is produced upon successful bake. Manually import this into your project content.