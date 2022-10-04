#!/bin/bash
gcc -c -fPIC *.c
gcc -shared -o libfilename.so *.o
