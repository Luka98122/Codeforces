@echo off
setlocal

REM =========================================
REM Install GCC/G++/GDB for MSYS2 UCRT64
REM =========================================

echo.
echo =========================================
echo Updating MSYS2...
echo =========================================
echo.

C:\msys64\usr\bin\bash.exe -lc "pacman -Syu --noconfirm"

echo.
echo =========================================
echo Installing GCC/G++...
echo =========================================
echo.

C:\msys64\usr\bin\bash.exe -lc "pacman -S --needed --noconfirm mingw-w64-ucrt-x86_64-gcc"

echo.
echo =========================================
echo Installing GDB...
echo =========================================
echo.

C:\msys64\usr\bin\bash.exe -lc "pacman -S --needed --noconfirm mingw-w64-ucrt-x86_64-gdb"

echo.
echo =========================================
echo Verifying installation...
echo =========================================
echo.

C:\msys64\ucrt64\bin\g++.exe --version
echo.
C:\msys64\ucrt64\bin\gdb.exe --version

echo.
echo =========================================
echo Installation complete.
echo =========================================
echo.
echo Add this to USER PATH:
echo.
echo C:\msys64\ucrt64\bin
echo.

pause