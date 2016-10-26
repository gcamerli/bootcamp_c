#!/bin/sh
# sh find_nicolas_bomber.sh annuaire

if [ "$1" ]; then
	cat $1 | grep -i "Nicolas" | grep -i "Bomber" | awk '{print $3}' | sed -n 1~2p
fi
