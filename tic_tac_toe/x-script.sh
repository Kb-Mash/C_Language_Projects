#!/bin/bash

#script to create a static library and execute the source code

gcc -c *.c
ar -rcs libarc.a *.o
gcc -L. -larc
./a.out
