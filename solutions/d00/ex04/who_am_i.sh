#!/bin/sh
# sh who_am_i.sh

ldapwhoami -Q | cut -c 4-
# SASL Quiet mode
