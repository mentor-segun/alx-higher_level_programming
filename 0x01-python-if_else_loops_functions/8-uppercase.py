#!/usr/bin/python3
def uppercase(str):
    for char in str:
        value = ord(char)
        if ord('a') <= value <= ord('z'):
            value = value - 32
        print("{}".format(chr(value)), end="")
    print()
