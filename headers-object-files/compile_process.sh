#!/bin/bash


# u have to compile the test file first 
gcc -c test.c -o test.o

# now we link that with main.c
gcc main.c test.o -o main
