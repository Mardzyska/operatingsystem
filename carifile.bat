@echo off
set /p namafile=Tulis namafile dan ekstensinya :
dir /S |findstr /c:"%namafile%"