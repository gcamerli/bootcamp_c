#!/bin/sh
# sh exo2.sh

mkdir test0 test2
ln -s test0 test6
# Directory and symlink creation
truncate -s 4 test1
truncate -s 1 test3
truncate -s 2 test4
# File creation and size mod.
chmod 715 test0
chmod 714 test1
chmod 504 test2
chmod 404 test3
chmod 641 test4
# Change permissions
touch -t 06012047 test0
touch -t 06012146 test1
touch -t 06012245 test2
touch -t 06012344 test3
touch -t 06012343 test4
touch -ht 06012220 test6
# Change timestamp
link test3 test5
# Link creation 
ls -l
# Long list
tar -cf exo2.tar test*
rm -rf test* 
# Compress archive and deletion

# You don't have to push this !
