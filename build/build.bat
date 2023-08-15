@echo off
cmake -G "MinGW Makefiles" ../ && cmake --build . -j %NUMBER_OF_PROCESSORS%

IF %ERRORLEVEL% NEQ 0 (
    exit /b %ERRORLEVEL%
)