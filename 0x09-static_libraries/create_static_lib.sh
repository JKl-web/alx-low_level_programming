#!/bin/bas
gcc -Wall -Wextra -Werror -pedantic -c *.c
ar -rc liball.a *.o
ranlib liball.o
