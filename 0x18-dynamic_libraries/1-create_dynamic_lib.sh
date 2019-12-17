#!/bin/bash
gcc -fPIC -Wall -Werror -Wextra -pedantic *.c -shared -o liball.so
