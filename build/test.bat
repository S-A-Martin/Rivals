@echo off
CALL build.bat

IF %ERRORLEVEL% NEQ 0 (
    echo Build failed. Skipping test execution.
    exit /b %ERRORLEVEL%
)

for %%G in (tst\*.exe) do (
    call "%%G" "--gtest_color=yes"
)