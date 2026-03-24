#!/bin/bash
set -e

gcc ex1_mobile_money.c -o ex1

output=$(printf "10000\n1.5\n" | ./ex1)

echo "$output" | grep -q "150.00"
echo "$output" | grep -q "10150.00"
