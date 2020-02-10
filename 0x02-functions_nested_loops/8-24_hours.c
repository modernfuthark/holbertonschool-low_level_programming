#include "holberton.h"
/**
 *
 *
 *
 *
 */

void jack_bauer(void)
{
	int h1, h2, m1, m2;
	int inCheck = 9;

	for (h1 = 0; h1 <= 2; h1++)
	{
		for (h2 = 0; h2 <= inCheck; h2++)
		{
			if (h1 == 2)
				inCheck = 3;
			for (m1 = 0; m1 <= 5; m1++)
			{
				for (m2 = 0; m2 <= 9; m2++)
				{
					_putchar(h1 + '0');
					_putchar (h2 + '0');
					_putchar(':');
					_putchar(m1 + '0');
					_putchar(m2 + '0');
					_putchar('\n');
				}
			}
		}
	}
}
