cmake -S . -B build -G "MinGW Makefiles"
cd %~dp0build
mingw32-make
pause cmd