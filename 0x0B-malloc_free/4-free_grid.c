#include "holberton.h"
/**
 * free_grid - Free a grid's memory
 * @grid: Grid
 * @height: Height of grid
 * Return: Nothing, function is void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
