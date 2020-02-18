#include "holberton.h"
#include <stdio.h>
/**
 * print_array - Prints n elements of array a
 * @a: Array
 * @n: Print num
 * Return: Nothing, function is void
 */

void print_array(int *a, int n)
{
	int i;
	int checky;

	if (n != 0)
	{
		for (i = 0; i <= checky; i++)
		{
			printf("%d", a[i]);
			if (i != checky)
				printf(", ");
		}
	}
	printf("\n");
}
