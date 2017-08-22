#!/bin/sh
# sh r_dwssap.sh

if ([ "FT_LINE1" ] && [ "FT_LINE2" ]); then
	cat /etc/passwd | grep -v "#" | awk 'NR%2==0' | cut -d : -f 1 | rev | sort -r |\
	awk '{if (NR >= '$FT_LINE1' && NR <= '$FT_LINE2') print}' |\
	tr '\n' ',' | sed 's/,/, /g' | rev | cut -c 3- | rev | tr '\n' '.'
fi
