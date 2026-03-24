#!/bin/bash
set -e

gcc ex2_fuel.c -o ex2

output=$(printf "300\n20\n" | ./ex2)

echo "$output" | grep -q "15.00"
