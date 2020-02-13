#include "holberton.h"
/**
 * print_triangle - Prints a triangle of size
 * @size: Size of triangle
 * Return: Nothing, function is void
 */

void print_triangle(int size)
{
	int height, spaces, iSpaces, pounds, iPounds;

	if (size > 0)
	{
		spaces = size - 1;
		pounds = 1;
		for (height = 0; height < size; height++)
		{
			for (iSpaces = 1; iSpaces <= spaces; iSpaces++)
			{
				_putchar(' ');
			}
			for (iPounds = 1; iPounds <= pounds; iPounds++)
			{
				_putchar('#');
			}

			spaces--;
			pounds++;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
