#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -rc libal.a *.o
ranlib libal.a

