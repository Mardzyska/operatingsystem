@echo off
title CMDGame
color 0B

set /p kata=Tulis sebuah kata : 
ECHO %kata%
pause
for /r %%x in (%kata%) do echo "%%x"

echo Thanks 
pause
exit /b