#!/usr/bin/python3
""" 5-island_perimeter.py: Get the perimeter of an island """


def island_perimeter(grid):
    """ island_perimeter: Calculate perimeter of a grid 'island' """
    TotalPerimeter = 0
    for i in range(0, len(grid)):
        for j in range(0, len(grid[i])):
            GLi = len(grid[i])
            # The process will need to check the areas around
            # one subindex, so it'll need to use both i and j
            # to find said surrounding areas.
            if grid[i][j] == 1:  # Grind found land, get perimeter...
                # check upper area
                if (i > 0 and grid[i - 1][j] == 0) or i == 0:
                    TotalPerimeter += 1
                # Check left and right
                if (j > 0 and grid[i][j - 1] == 0) or j == 0:
                    TotalPerimeter += 1
                if (j < GLi - 1 and grid[i][j + 1] == 0) or j == GLi:
                    TotalPerimeter += 1
                # Check lower area
                if (i < len(grid) - 1 and grid[i + 1][i] == 0):
                    TotalPerimeter += 1
    return TotalPerimeter
