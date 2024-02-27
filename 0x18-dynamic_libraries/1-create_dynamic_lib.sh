#!/bin/bash
<<<<<<< HEAD
gcc -Wall -Wextra -pedantic -c -fPIC *.c
=======
gcc -Wall -Wextra -Werror -pedantic -c -fPIC *.c
>>>>>>> 23c16df786d310ec8eab8391a54c7aaed4a4b34b
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
