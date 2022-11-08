#!/bin/bash

gcc -c test.c -o test.o 
gcc external_vars.c test.o -o a

