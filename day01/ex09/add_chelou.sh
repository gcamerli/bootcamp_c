#!/bin/sh
# sh add_chelou.sh

# Set 1
#FT_NBR1=\\\'\?\"\\\"\'\\
#FT_NBR2=rcrdmddd

# Set 2
#FT_NBR1=\\\"\\\"\!\\\"\\\"\!\\\"\\\"\!\\\"\\\"\!\\\"\\\"\!\\\"\\\"
#FT_NBR2=dcrcmcmooododmrrrmorcmcrmomo

# Uncomment one set of values per time for testing

if ([ "$FT_NBR1" ] && [ "$FT_NBR2" ]); then 
	A="$(echo $FT_NBR1 | tr "'\"?\\\!" "02314")" 
	B="$(echo $FT_NBR2 | tr "mrdoc" "01234")"
	# Create 2 numerical bases for FT_NBR1 and FT_NBR2
	echo "$A + $B" | bc | xargs echo "obase=13; ibase=5;" | bc |\
	# Execute the sum and change the numerical base
	tr "0123456789ABC" "gtaio luSnemf"
	# Create string conversion for SUM
fi
