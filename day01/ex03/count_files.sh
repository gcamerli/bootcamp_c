#!/bin/sh
# sh count_files.sh

find . | wc | awk '{print $1}'
