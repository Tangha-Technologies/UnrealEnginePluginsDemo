@echo off
chcp 65001 >nul
setlocal enabledelayedexpansion

:: ===============================
:: Unreal 源码 UTF-8 BOM 转换器（带日志 + 递归）
:: ===============================

if "%~1"=="" (
    echo 用法: Convert-UECodeToUtf8Bom.bat ^<路径^>
    echo 例如: Convert-UECodeToUtf8Bom.bat "D:\UnrealEnginePlugins\TanghaGrpc"
    pause
    exit /b 1
)

set "TARGET=%~1"
set "LOGFILE=%~dp0ConvertLog.txt"

if exist "%LOGFILE%" del "%LOGFILE%"
echo ========== 转换日志 (%date% %time%) ========== >> "%LOGFILE%"
echo. >> "%LOGFILE%"

if not exist "%TARGET%" (
    echo [错误] 路径不存在：%TARGET%
    echo [错误] 路径不存在：%TARGET% >> "%LOGFILE%"
    pause
    exit /b 1
)

echo 🔍 正在扫描 "%TARGET%" ...
echo.

for /r "%TARGET%" %%F in (*.h *.hpp *.c *.cpp *.inl) do (
    echo ▸ 转换：%%~fF
    echo [Convert] %%~fF >> "%LOGFILE%"

    rem 使用 PowerShell 转换编码
    powershell -Command ^
        "$p='%%~fF'; $t=Get-Content -Raw -Encoding Default $p;" ^
        "[IO.File]::WriteAllText($p, $t, [Text.UTF8Encoding]::new($true))"
)

echo. >> "%LOGFILE%"
echo ✅ 转换完成！日志输出到：%LOGFILE%
echo -------------------------------------
pause
endlocal
exit /b 0
