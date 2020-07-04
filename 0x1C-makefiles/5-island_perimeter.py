#!/usr/bin/python3
""" Module: Island Perimeter """


def island_perimeter(grid):
    """ returns the perimeter of the island described in grid """
    perimeter = 0
    for row in range(len(grid)):
        for column in range(len(grid[row])):
            if grid[row][column] == 1:
                perimeter += 4
                if grid[row + 1][column] == 1:
                    perimeter -= 2
                if grid[row][column + 1] == 1:
                    perimeter -= 2

    return perimeter
