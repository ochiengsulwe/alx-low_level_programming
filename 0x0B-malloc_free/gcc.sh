#!/bin/bash

echo "Input the CFILE to be compiled"
read CFILE

echo "How would you want your CFILE to be saved?"
read EXEC

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main.c $CFILE -o $EXEC
