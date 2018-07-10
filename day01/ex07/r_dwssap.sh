#!/bin/sh
cat /etc/passwd | grep -v "#" | sed -n "n;p;g" | cut -f 1 -d ":" | rev | sort -r | sed -n -e "$FT_LINE1,${FT_LINE2}p" | tr "'\n'" "," | sed 's/,/, /g' | rev | sed "s/,/./" | rev
