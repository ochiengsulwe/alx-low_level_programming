#!/bin/bash
echo "ENTER CFILE"
read CFILE
echo "ENTER OUTPUT NAME"
read EXEC
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main.c $CFILE -o $EXEC
