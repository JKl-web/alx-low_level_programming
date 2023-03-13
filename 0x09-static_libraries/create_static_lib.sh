#!/bin/bash
gcc -Wall -pedantic -Wextra -Werror -c *.c
ar -rcs liball.a *.o
