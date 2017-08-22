#!/bin/sh
# sh count_files.sh | cat -e

find . -type f -o -type d | wc | awk '{print $1}'
