#!/bin/sh
# sh find_sh.sh

find . -name "*.sh" | rev | cut -c 4- | cut -d / -f 1 | rev | sort
