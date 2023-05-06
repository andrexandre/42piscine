#!/bin/sh
git log -n5 --pretty=format:"%H";
echo ""
#show only 5 full hashes and echo nothing to fix a bug with the 5th hash
