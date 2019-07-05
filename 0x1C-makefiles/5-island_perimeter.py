#!/usr/bin/python3
""" perimeter of a island """


def island_perimeter(grid):
    """ a function """
    perimetro = 0
    lados = 0
    bordes = 0

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                lados += 1
                if i != len(grid) - 1:
                    if grid[i + 1][j]:
                        bordes += 1
                if j != len(grid[i]) - 1:
                    if grid[i][j + 1] == 1:
                        bordes += 1
    perimetro = (lados * 4) - (bordes * 2)
    return perimetro
