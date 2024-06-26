@echo off
set EXE_PATH="exec/clinq_example.exe"

if not exist bin (
    MKDIR bin
)

cd bin

echo creating object file of main
gcc -c ../main.c --std=gnu99 -o main.o

echo creating object file of clinq
gcc -c ../clinq/clinq.c --std=gnu99 -o clinq.o

echo creating object file of easy_output
gcc -c ../utils/easy_output.c -o easy_output.o

echo linking object files
gcc main.o clinq.o easy_output.o -o clinq_example

if not exist exec (
    mkdir exec
)


move clinq_example.exe %EXE_PATH%
echo created executable at %EXE_PATH% 

echo cleaning object files

del main.o
del clinq.o
del easy_output.o

echo.
echo finished