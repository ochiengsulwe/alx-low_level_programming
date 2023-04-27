#!/bin/bash

echo "ENTER CFILE TO BE COMPILED"
read CFILE

echo "HOW DO YOU WANT THE CFILE SAVED?"
read EXEC

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main.c $CFILE -o $EXEC
