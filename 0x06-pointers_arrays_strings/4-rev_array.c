#include "holberton.h"
/**
 * reverse_array - Reverse the array a
 * @a: Array to reverse
 * @n: Reverse number
 * Return: Nothing, function is void
 */

void reverse_array(int *a, int n)
{
	int end, i, swap;

	end = a[n - 1];

	for (i = 0; i <= (n - 1) / 2; i++)
	{
		swap = a[i];
		a[i] = end;
		if (i == 0)
			end = a[(n - 1) - 1];
		else
			end = a[(n - 1) - 1 - i];
		a[(n - 1) - i] = swap;
	}
}
