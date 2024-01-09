#!/usr/bin/python3

def print_matrix_integer(matrix=[[]]):
    for r in matrix:
        for c, number in enumerate(r):
            if c != len(r) - 1:
                print("{:d} ".format(num), end='')
            else:
                print("{:d}".format(num))
