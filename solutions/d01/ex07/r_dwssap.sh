#!/bin/sh
# sh r_dwssap.sh

if ([ "$FT_LINE1" ] && [ "$FT_LINE2" ]); then
	cat /etc/passwd | grep -v '^#'| sed -n 'p;n' | cut -d : -f 1 | rev | sort -r |\
	# Cat file, substitute hash (#), print only pair lines, cut logins, reverse\
	# line and sort alphabetically reversed
	awk '{if(NR >= '$FT_LINE1' && NR <= '$FT_LINE2') print}' |\
	# Print only lines between FT_LINE1 and FT_LINE2
	sed 's\$\,\g' | tr "\n" " " | cut -d "," -f -$FT_LINE2 | tr "\n" "."
	# Substitute end of line ($) and new line (\n) with commas (,) and spaces, and\
	# add a point (.) at the end of the line instead of the new line (\n)
fi
