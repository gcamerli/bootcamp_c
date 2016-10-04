#!/bin/sh
# sh add_chelou.sh

echo $FT_NBR1 + $FT_NBR2 |\ 
# Print SUM
tr "mrdoc" "01234" | tr "'\"?\!\\" "02341" |\
# Create 2 bases for FT_NBR1 and FT_NBR2
xargs echo "obase=13; ibase=5;" | bc |\
# Execute the sum from standard input 
tr "0123456789ABC" "gtaio luSnemf"
# Create base for SUM
