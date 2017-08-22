#!/bin/sh
# sh bon.sh 2> /dev/null | cat -e

ldapsearch -Q "sn=*bon*" | grep "sn: " | cut -c 5- | grep -i "bon" | wc | awk '{print $1}'
