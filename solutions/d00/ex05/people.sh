#!/bin/sh
# sh people.sh

ldapsearch -Q "(uid=z*)" | grep "cn: " | sort -r | cut -c 5-
