@echo off
setlocal

REM =========================================
REM VS Code + GCC + GDB C++ Setup Script
REM Place this in your project root:
REM C:\Users\lmarkovic24\Codeforces
REM Then run:
REM setup_cpp_vscode.bat
REM =========================================

echo Creating .vscode folder...
if not exist ".vscode" mkdir ".vscode"

git config --global user.name "Luka Markovic"
git config --global user.email "Luka98122@example.com"


REM =========================================
REM c_cpp_properties.json
REM =========================================

echo Writing c_cpp_properties.json...

(
echo {
echo   "configurations": [
echo     {
echo       "name": "Win32",
echo       "includePath": [
echo         "${workspaceFolder}/**"
echo       ],
echo       "compilerPath": "C:/msys64/ucrt64/bin/g++.exe",
echo       "cStandard": "c17",
echo       "cppStandard": "c++20",
echo       "intelliSenseMode": "windows-gcc-x64"
echo     }
echo   ],
echo   "version": 4
echo }
) > ".vscode\c_cpp_properties.json"

REM =========================================
REM settings.json
REM =========================================

echo Writing settings.json...

(
echo {
echo   "C_Cpp_Runner.cCompilerPath": "C:/msys64/ucrt64/bin/gcc.exe",
echo   "C_Cpp_Runner.cppCompilerPath": "C:/msys64/ucrt64/bin/g++.exe",
echo   "C_Cpp_Runner.debuggerPath": "C:/msys64/ucrt64/bin/gdb.exe",
echo.
echo   "C_Cpp_Runner.cStandard": "c17",
echo   "C_Cpp_Runner.cppStandard": "c++20",
echo.
echo   "C_Cpp_Runner.useMsvc": false,
echo.
echo   "C_Cpp_Runner.enableWarnings": true,
echo   "C_Cpp_Runner.warningsAsError": false
echo }
) > ".vscode\settings.json"

REM =========================================
REM launch.json
REM =========================================

echo Writing launch.json...

(
echo {
echo   "version": "0.2.0",
echo   "configurations": [
echo     {
echo       "name": "Debug C++",
echo       "type": "cppdbg",
echo       "request": "launch",
echo       "program": "${fileDirname}/${fileBasenameNoExtension}.exe",
echo       "args": [],
echo       "stopAtEntry": false,
echo       "cwd": "${fileDirname}",
echo       "externalConsole": false,
echo       "MIMode": "gdb",
echo       "miDebuggerPath": "C:/msys64/ucrt64/bin/gdb.exe",
echo.
echo       "setupCommands": [
echo         {
echo           "description": "Enable pretty-printing",
echo           "text": "-enable-pretty-printing",
echo           "ignoreFailures": true
echo         }
echo       ],
echo.
echo       "preLaunchTask": "build cpp"
echo     }
echo   ]
echo }
) > ".vscode\launch.json"

REM =========================================
REM tasks.json
REM =========================================

echo Writing tasks.json...

(
echo {
echo   "version": "2.0.0",
echo   "tasks": [
echo     {
echo       "label": "build cpp",
echo       "type": "shell",
echo.
echo       "command": "C:/msys64/ucrt64/bin/g++.exe",
echo.
echo       "args": [
echo         "-g",
echo         "-std=c++20",
echo         "-Wall",
echo         "-Wextra",
echo         "-o",
echo         "${fileDirname}/${fileBasenameNoExtension}.exe",
echo         "${file}"
echo       ],
echo.
echo       "group": {
echo         "kind": "build",
echo         "isDefault": true
echo       },
echo.
echo       "problemMatcher": [
echo         "$gcc"
echo       ]
echo     }
echo   ]
echo }
) > ".vscode\tasks.json"

echo.
echo =========================================
echo VS Code C++ setup complete.
echo =========================================
echo.
echo Next steps:
echo 1. Disable the "C/C++ Runner" extension
echo 2. Keep the Microsoft "C/C++" extension
echo 3. Open any main.cpp
echo 4. Press F5
echo.

pause