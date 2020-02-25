#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - Print diagonal sums
 * @a: Matrix
 * @size: Size of matrix
 * Return: Nothing, function is void
 */

void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	for (i = 0; i < size * size; i += (size + 1))
	{
		sum1 += a[i];
	}
	for (i = size - 1; i < size * size - 1; i += (size - 1))
	{
		sum2 += a[i];
	}

	printf("%d, %d\n", sum1, sum2);
}
