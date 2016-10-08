#!/bin/sh
# sh libft_creator.sh

gcc -Wall -Wextra -Werror -c ./ft_*.c
# Compile functions
ar rc libft.a ./ft_*.o
# Create library
ranlib libft.a
# Create an index library
rm ./ft_*.o
# Remove .o files
