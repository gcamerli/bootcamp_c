#!/bin/sh
# sh add_ldif.sh

ldapmodify -D "uid=gcamerli" -f mobile-phone.ldif
# Add a new field from .ldif

ldapsearch -b "uid=gcamerli"
# Verify the addition

# You don't have to push this !
