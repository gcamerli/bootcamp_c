#!/bin/sh
# sh skip.sh

ls -l | sed -n 'n;p'
# Print only the odd lines
