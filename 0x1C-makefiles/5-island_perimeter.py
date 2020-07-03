#!/usr/bin/python3
""" Module: Island Perimeter """


def island_perimeter(grid):
    """ returns the perimeter of the island described in grid """
    island = []
    total = 0
    num = 0
    for i in grid:
        if i.count(1):
            num += i.count(1)
    perimeter = ((num - 2) * 2) + 6
    return(perimeter)
