#!/usr/bin/python3
"""
This calculates the perimeter of an island
"""


def island_perimeter(grid):
    """Calculate the perimeter of an island in a grid."""
    h, w = len(grid), len(grid[0])
    edges, land = 0, 0

    for i in range(h):
        for j in range(w):
            if grid[i][j] == 1:
                land += 1
                edges += (j > 0 and grid[i][j - 1] == 1) + (i > 0 and grid[i - 1][j] == 1)
    return land * 4 - edges * 2
