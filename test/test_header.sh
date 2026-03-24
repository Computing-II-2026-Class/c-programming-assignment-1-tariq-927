#!/bin/bash
set -e

files=("ex1_mobile_money.c" "ex2_fuel.c" "ex3_electricity.c")

for file in "${files[@]}"
do
    # Check for Name
    grep -qi "Name:" "$file"

    # Check for Student Number
    grep -qi "Student Number:" "$file"
done
