CD bin

gcc -c ../main.c --std=gnu99 -o main.o
gcc -c ../clinq/clinq.c --std=gnu99 -o clinq.o
gcc -c ../utils/easy_output.c -o easy_output.o

gcc main.o clinq.o easy_output.o -o clinq_example

RMDIR exec /S /Q
MKDIR exec

MOVE clinq_example.exe exec/clinq_example.exe