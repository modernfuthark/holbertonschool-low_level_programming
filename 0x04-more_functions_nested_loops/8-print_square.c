#include "holberton.h"
/**
 * print_square - Print a square of size
 * @size: Size of square
 * Return: Nothing, function is void
 */

void print_square(int size)
{
	int width, height;

	if (!(size <= 0))
	{
		for (height = 0; height < size; height++)
		{
			for (width = 0; width < size; width++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
