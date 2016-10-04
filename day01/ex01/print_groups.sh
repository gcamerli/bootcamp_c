#!/bin/sh
# sh print_groups.sh

if	[ "$FT_USER" ]; then
	groups $FT_USER | tr " " ","
fi
