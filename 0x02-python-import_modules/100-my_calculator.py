#!/usr/bin/python3
from calculator_1 import add, sub, mul, div
import sys
if __name__ == "__main__":
    args = sys.argv
    if len(args) != 4:
        print("Usage: ./100-my_calculator.py <a> <operator> <b>")
        sys.exit(1)

    a = int(args[1])
    operator = args[2]
    b = int(args[3])

    operations = {'+': add, '-': sub, '*': mul, '/': div}

    if operator not in operations:
        print("Unknown operator. Available operators: +, -, * and /")
        sys.exit(1)

    result = operations[operator](a, b)
    print(f"{a} {operator} {b} = {result}")
