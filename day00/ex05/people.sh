#!/bin/sh
ldapsearch -LLL "uid=Z*" | grep cn: | cut -c5- | sort -r --ignore-case
