#include "holberton.h"
/**
 * swap_int - Swap integers
 * @a: Int 1
 * @b: Int 2
 * Return: Nothing, function is void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
