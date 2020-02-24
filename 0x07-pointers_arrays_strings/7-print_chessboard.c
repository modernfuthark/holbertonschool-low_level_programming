#include "holberton.h"
#include <stdio.h>
/**
 * print_chessboard - Prints a chessboard
 * @a: Board
 * Return: Nothing, function is void
 */

void print_chessboard(char (*a)[8])
{
	int i = 0, j = 0;

	while (i < 8)
	{
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		i++;
		j = 0;
		_putchar('\n');
	}
}
