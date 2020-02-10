#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_to_98 - Print from n to 98
 * @n: Starting number
 *
 * Return: Nothing, function is void
 */

void print_to_98(int n)
{
	if (n < 98) /*Print up*/
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			n++;
		}
	}
	else if (n > 98) /*Print down*/
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			n--;
		}
	}
	else /*n == 98*/
	{
		printf("%d", n);
	}

	printf("\n");
}
