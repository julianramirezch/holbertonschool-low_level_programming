#!/usr/bin/python3
""" Module: Island Perimeter """


def island_perimeter(grid):
    """ returns the perimeter of the island described in grid """
    y = 0
    x = 0
    if grid:
        for i in grid:
            if i.count(1):
                y += 1
                if x < i.count(1):
                    x = i.count(1)
    return (2 * x) + (2 * y)
