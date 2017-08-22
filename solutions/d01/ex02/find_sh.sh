#!/bin/sh
# sh find_sh.sh | cat -e

find . -name "*.sh" | rev | cut -c 4- | cut -d / -f 1 | rev
