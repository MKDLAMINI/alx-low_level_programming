#!/usr/bin/python3

"""
island_perimeter(grid):

This function calculates the perimeter of the island described in a 2D grid

Args:
    grid: A list of lists of integers representing the grid.
    - 0: Water zone
    - 1: Land zone


Returns:
    The perimeter of the island as an integer.

Raises:
    ValueError: If the grid is not rectangular or exceeds dimensions (100x100).
"""


def island_perimeter(grid):
    """
    Calculates the perimeter of the island in the provided grid.

    The grid is assumed to be completely surrounded by water and contain
    only one island (or no island at all). The island doesn't have internal
    "lakes" (water zones disconnected from the surrounding water).

    Args:
        grid: A list of lists of integers representing the grid.
              - 0: Water zone
              - 1: Land zone

    Returns:
        The perimeter of the island as an integer.

    Raises:
        ValueError: If the grid is not rectangular or exceeds dimensions (100x100).
    """

    rows, cols = len(grid), len(grid[0])


    if rows > 100 or cols > 100:
        raise ValueError("Grid dimensions exceed maximum (100x100)")
    for row in grid:
        if len(row) != cols:
            raise VlueError("Grid is not rectangular")

    perimeter = 0

    for row in range(rows):
        for col in range(cols):
            if grid[row][col] == 1:
                perimeter += 4


                if row > 0 and grid[row - 1][col] == 0:
                    perimeter -= 2
                if col > 0 and grid[row][col - 1] == 0:
                    perimeter -= 2

    return perimeter
