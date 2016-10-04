#!/bin/sh
# sh MAC.sh

ifconfig | grep "ether" | awk '{print $2}'
