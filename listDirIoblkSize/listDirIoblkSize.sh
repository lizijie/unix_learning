#!bin/sh
BIN=./ioblksize

for file in ./*
do
    ./ioblksize $file
done
