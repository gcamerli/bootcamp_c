#!/bin/sh
# sh count_files.sh | cat -e

find . | wc | awk '{print $1}'
