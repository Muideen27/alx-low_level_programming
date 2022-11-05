#!/bin/bash
gcc -Wall -Wextra -Werror -pedentic -c *.c
ar rc liball.a *.o
