#!/usr/bin/python3
'''Module for island perimeter function'''


def island_perimeter(grid):
    '''Island Perimeter Function'''
    if not grid or len(grid) == 0:
        return 0
    row = len(grid)
    col = len(grid[0])
    peri = 0
    for i in range(row):
        for j in range(col):
            if grid[i][j] == 1:
                peri += 4
                if i > 0 and grid[i - 1][j] == 1:
                    peri -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    peri -= 2
    return peri
