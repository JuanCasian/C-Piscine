#!/bin/sh
echo $FT_NBR1 + $FT_NBR2 | sed 's/\\/1/g' | sed 's/?/3/g' | sed 's/!/4/g' | sed "s/\'/0/g" | sed "s/\"/2/g" | tr "mrdoc" "01234" | xargs echo "ibase=5 ; obase=A;" | bc | xargs echo "ibase=A ; obase=D; " | bc | tr "0123456789ABC" "gtaio luSnemf"

