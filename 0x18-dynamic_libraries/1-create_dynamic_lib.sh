#!/bin/bash
gcc -c -fpic *.c
gcc -shared -o libdynamic.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
rm *.o
