@echo off
title Compiling IRISMAN
taskkill /IM cmd.exe /T /FI "WINDOWTITLE eq Administrator:*">NUL
cls

set PS3SDK=/c/PSDK3v2
set WIN_PS3SDK=C:/PSDK3v2
set PATH=%WIN_PS3SDK%/mingw/msys/1.0/bin;%WIN_PS3SDK%/mingw/bin;%WIN_PS3SDK%/ps3dev/bin;%WIN_PS3SDK%/ps3dev/ppu/bin;%WIN_PS3SDK%/ps3dev/spu/bin;%WIN_PS3SDK%/mingw/Python27;%PATH%;
set PSL1GHT=%PS3SDK%/psl1ght
set PS3DEV=%PS3SDK%/ps3dev

make npdrm

:if exist EBOOT.BIN del EBOOT.BIN
if exist RELOAD.SELF del RELOAD.SELF
if exist iris_manager.self del iris_manager.self
if exist IRISMAN-master.elf del IRISMAN-master.elf
if exist IRISMAN-master.self ren IRISMAN-master.self RELOAD.SELF

pause
