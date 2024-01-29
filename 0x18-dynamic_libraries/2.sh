#!/bin/bash
gcc -c -fpic add.c
gcc -shared -o 100-operations.so add.o
