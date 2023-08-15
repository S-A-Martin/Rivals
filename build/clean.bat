@echo off
setlocal enabledelayedexpansion

for /d %%i in (*) do (
    rmdir /s /q "%%i"
)

for %%i in (*) do (
    if not "%%~nxi"=="clean.bat" (
        if not "%%~nxi"=="build.bat" (
            if not "%%~nxi"=="test.bat" (
                if not "%%~nxi"=="run.bat" (
                    if not "%%~nxi"=="buildclean.bat" (
                        if not "%%~nxi"=="testclean.bat" (
                            if not "%%~nxi"=="runclean.bat" (
                                del /q "%%i"
                            )
                        )
                    )
                )
            )
        )
    )
)

endlocal
