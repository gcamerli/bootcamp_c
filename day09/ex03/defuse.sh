#!/bin/sh
# sh defuse.sh

if [ "$1" ]; then
	touch -d "1 seconds ago" $1 | stat -c%Y $1
fi
