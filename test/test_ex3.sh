#!/bin/bash
set -e

gcc ex3_electricity.c -o ex3

output=$(printf "120\n750\n" | ./ex3)

echo "$output" | grep -q "90000.00"
