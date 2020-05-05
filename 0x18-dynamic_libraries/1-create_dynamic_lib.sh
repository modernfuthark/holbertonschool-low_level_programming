#!/bin/bash
gcc -c *.c
gcc -shared -o liball.so *.o
ranlib liball.so
