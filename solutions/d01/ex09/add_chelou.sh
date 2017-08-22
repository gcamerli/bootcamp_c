#!/bin/sh
# sh add_chelou.sh

# Set 1
#FT_NBR1=\\\'\?\"\\\"\'\\
#FT_NBR2=rcrdmddd

# Set 2
#FT_NBR1=\\\"\\\"\!\\\"\\\"\!\\\"\\\"\!\\\"\\\"\!\\\"\\\"\!\\\"\\\"
#FT_NBR2=dcrcmcmooododmrrrmorcmcrmomo

if ([ "$FT_NBR1" ] && [ "$FT_NBR2" ]); then 
	echo $FT_NBR1 + $FT_NBR2 | tr "mrdoc" "01234" | tr "'\"?\!\\" "02341" | xargs echo "obase=13; ibase=5;" | bc |\
	tr '0123456789ABC' 'gtaio luSnemf'
fi
