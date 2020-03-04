#include "holberton.h"
/**
 * alloc_grid - Pre-allocates a grid of width and height
 * @width: Width of grid
 * @height: Height of grid
 * Return: Pre-allocated grid filled with 0
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width == 0 || height == 0)
		return (NULL);

	grid = malloc(sizeof(int) * (width + height));
	if (!grid)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
