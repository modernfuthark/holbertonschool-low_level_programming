#include "holberton.h"
/**
 * print_most_numbers - Print numbers 0 - 9, not 2 or 4
 *
 * Return: Nothing, function is void
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
			_putchar(i + '0');
	}

	_putchar('\n');
}
