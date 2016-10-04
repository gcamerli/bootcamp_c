#!/bin/sh
# sh bon.sh 2> /dev/null | cat -e

ldapsearch -Q "(sn=*)" cn | grep "^cn: " | grep -i "bon" | cut -c 5- | wc -l
