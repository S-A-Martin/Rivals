@echo off
CALL build.bat

IF %ERRORLEVEL% NEQ 0 (
    echo Build failed. Skipping prog execution.
    exit /b %ERRORLEVEL%
)

for %%G in (src\*.exe) do (
    call "%%G"
)
