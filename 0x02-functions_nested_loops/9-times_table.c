#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * times_table - Print a 9x9 times table
 *
 * Return: Nothing, function is void
 */

void times_table(void)
{
	int Rows;
	int Columns;
	int ones = 0;
	int tens = 0;
	int num = 0;
	int multi = 0;

	for (Columns = 0; Columns < 10; Columns++)
	{
		for (Rows = 0; Rows < 10; Rows++)
		{
			num = Rows * multi;
			ones = num % 10;
			tens = num / 10;
			if (tens != 0)
				_putchar(tens + '0');

			_putchar(ones + '0');

			if (Rows != 9 && ((Rows + 1) * multi) <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if (Rows != 9 && ((Rows + 1) * multi) >= 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		multi++;
		Rows = 0;
	}
}
