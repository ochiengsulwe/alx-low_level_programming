#!/bin/bash

echo "ENTER CFILE"
read CFILE

echo "OUTPUT FILE"
read EXEC

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main.c $CFILE -o $EXEC
