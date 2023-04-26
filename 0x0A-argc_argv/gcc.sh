#!/bin/bash

echo "ENTER FILE"
read CFILE

echo "OUTPUT FILE"
read EXEC

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 $CFILE -o $EXEC
