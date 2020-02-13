#include "holberton.h"
/**
 * print_diagonal - Print a diagonal line of length n
 * @n: Length of line
 * Return: Nothing, funtion is void
 */

void print_diagonal(int n)
{
	int lines, spaces;

	/*spaces should be 1 behind lines*/
	if (n <= 0)
		_putchar('\n');
	else
	{
		for (lines = 1; lines <= n; lines++)
		{
			for (spaces = 0; spaces <= lines - 1; spaces++)
			{
				if (spaces != 0)
					_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
