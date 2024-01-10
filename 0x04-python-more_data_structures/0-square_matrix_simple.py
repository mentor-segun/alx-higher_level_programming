#!/usr/bin/python3

def square_matrix_simple(matrix=[]):
    sq_mat = []

    for row in matrix:
        new_row = []
        for element in row:
            new_row.append(element ** 2)
        sq_mat.appemd(new_row)

    return sq_mat
