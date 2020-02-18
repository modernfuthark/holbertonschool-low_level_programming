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

	if (n != 0)
	{
		for (i = 0; i <= n - 1; i++)
		{
			printf("%d", a[i]);
			if (i != n - 1)
				printf(", ");
		}
	}
	printf("\n");
}
