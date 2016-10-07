#!/bin/sh
# sh add_chelou.sh

#FT_NBR1=\\\'\?\"\\\"\'\\
#FT_NBR2=rcrdmddd

#FT_NBR1=\\\"\\\"\!\\\"\\\"\!\\\"\\\"\!\\\"\\\"\!\\\"\\\"\!\\\"\\\"
#FT_NBR2=dcrcmcmooododmrrrmorcmcrmomo

if ([ "$FT_NBR1" ] && [ "$FT_NBR2" ]); then 
	echo $FT_NBR2$FT_NBR1 |	tr "'\"?\\\!" "02314" | tr "mrdoc" "01234" |\
	# Create 2 bases for FT_NBR1 and FT_NBR2
	xargs echo "obase=13; ibase=5;" | bc |\
	# Execute the sum from standard input 
	tr "0123456789ABC" "gtaio luSnemf"
	# Create base for SUM
fi
