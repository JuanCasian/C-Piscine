#!/bin/sh
ldapsearch -LLL "uid=*bon*" | grep "cn:" | wc -l | tr -d " "

