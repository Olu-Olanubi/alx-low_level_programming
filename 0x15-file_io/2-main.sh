#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-append_text_to_file.c -o c
echo -n Hello > hello
./c hello " World!
