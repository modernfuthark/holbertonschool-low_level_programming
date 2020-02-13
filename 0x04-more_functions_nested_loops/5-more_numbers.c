#include "holberton.h"
/**
 *
 *
 *
 */

void more_numbers(void)
{
	int n, lines;

	for (lines = 1; lines <= 10; lines++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
				_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}

}
