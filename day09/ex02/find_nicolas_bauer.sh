#/bin/sh
cat $1 | grep --ignore-case "Nicolas\tBauer" | grep "(*)" | cut -d$'\t' -f 4
