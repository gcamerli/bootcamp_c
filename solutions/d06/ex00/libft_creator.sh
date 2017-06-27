#!/bin/sh
# sh libft_creator.sh

gcc -Wall -Wextra -Werror -c ft*.c
# Create .o object files
ar rc libft.a ft*.o
# Create libft functions library
rm ft*.o
# Clean .o object files
ranlib libft.a
# Create an index inside libft library
