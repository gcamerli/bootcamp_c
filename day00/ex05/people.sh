#!/bin/sh
# sh people.sh

ldapsearch -Q -LLL "(uid=z*)" cn | grep "cn: " | sort -r | cut -c 5-
# Search man 5 ldap.conf
