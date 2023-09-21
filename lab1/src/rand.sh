#!/bin/bash
num=0
for ((i=1; i < 151; i++))
do
num=$(od -vAn -N2 -tu2 < /dev/urandom) 
echo -n "$num " >> numbers.txt
done
