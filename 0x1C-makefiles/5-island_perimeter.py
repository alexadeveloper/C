#!/usr/bin/python3
""" perimeter of a island """


def island_perimeter(grid):
    """ a function """
    perimetro = 0
    lados = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if grid[i - 1][j] == 1 or grid[i][j - 1] == 1:
                    lados = 2
                else:
                    lados = 4
            else:
                lados = 0
            perimetro = perimetro + lados
    return perimetro
