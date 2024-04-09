#!/bin/bash

# Compile source file to object file
gcc -Wall -Wextra -Werror -std=c17 -o $1 $1.c && ./$1 && rm $1
