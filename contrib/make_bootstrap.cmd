@echo off 
setlocal enableDelayedExpansion 

set KRUGERDIR=%APPDATA%\Krugercoin\blocks
for /F %%x in ('dir /B/D/ON %KRUGERDIR%\blk*.*') do (
  IF NOT [!B!] == [] set B=!B!+
  set FILENAME=%KRUGERDIR%\%%x
  set B=!B!"!FILENAME!"
)
copy /b %B% bootstrap.dat