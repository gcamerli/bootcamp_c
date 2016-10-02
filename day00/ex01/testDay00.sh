#!/bin/sh
# sh testDay00.sh

truncate -s 40 testDay00
# File creation and size mod.
chmod 455 testDay00
# Change permissions
touch -t 06012342 testDay00
# Change timestamp
tar -cf testDay00.tar testDay00
rm -f testDay00
# Compress archive and deletion

# You don't have to push this !
