@echo off
set ROOT=%~dp0

set ROOT=%ROOT:A:=a:%
set ROOT=%ROOT:B:=b:%
set ROOT=%ROOT:C:=c:%
set ROOT=%ROOT:D:=d:%
set ROOT=%ROOT:E:=e:%
set ROOT=%ROOT:F:=f:%
set ROOT=%ROOT:G:=g:%
set ROOT=%ROOT:H:=h:%
set ROOT=%ROOT:I:=i:%
set ROOT=%ROOT:J:=j:%
set ROOT=%ROOT:K:=k:%
set ROOT=%ROOT:L:=l:%
set ROOT=%ROOT:M:=m:%
set ROOT=%ROOT:N:=n:%
set ROOT=%ROOT:O:=o:%
set ROOT=%ROOT:P:=p:%
set ROOT=%ROOT:Q:=q:%
set ROOT=%ROOT:R:=r:%
set ROOT=%ROOT:S:=s:%
set ROOT=%ROOT:T:=t:%
set ROOT=%ROOT:U:=u:%
set ROOT=%ROOT:V:=v:%
set ROOT=%ROOT:W:=w:%
set ROOT=%ROOT:X:=x:%
set ROOT=%ROOT:Y:=y:%
set ROOT=%ROOT:Z:=z:%

set WATCOM=c:\watcom
set svn=\data\dev\svn-win32-1.6.6\bin
set tools=%root%\bin\tools
set FPPATH=с:\fpc\3.2.2\bin\i386-win32
set imgdir=\data\vm\img
set mkisofs=\data\dev\cdrtools\mkisofs.exe
set serverenv=win32
set env=WIN64
set os=WIN64
set REGINA=c:\rexx
set REXX=%REGINA%\regina
set SERVERENV=win32

set PATH=%WATCOM%\binnt;%WATCOM%\binw;%TOOLS%;%FPPATH%;%svn%;%regina%;\data\dev\qemu;\data\dev\cdrtools;\data\dev\Bochs-2.3.5;\data\dev\bin;\usr\local\wbin;%PATH%;
set INCLUDE=%WATCOM%\h;%WATCOM%\h\os21x;%WATCOM%\h\dos
set LIB=%WATCOM%\lib386\nt
set WD_PATH=%WATCOM%\binnt
set LANG=%WATCOM%
set WIPFC=%WATCOM%\wipfc
