#include "search_algos.h"
int binary_recursive(int *a, size_t s, int v, size_t l, size_t r);

/**
 * binary_recursive - Recursive binary search
 * @a: Array
 * @s: Size of array
 * @v: Value to find
 * @l: Left index
 * @r: Right index
 * Return: Index where value is found, -1 if not found
 */

int binary_recursive(int *a, size_t s, int v, size_t l, size_t r)
{
	size_t middle, i;

	if (l < r + 1)
		printf("Searching in array: ");
	for (i = l; i < r + 1; i++)
	{
		if (i == r)
			printf("%d\n", a[i]);
		else
			printf("%d, ", a[i]);
	}
	if (r >= l)
	{
		middle = l + (r - l) / 2;

		if (a[middle] == v)
			return (middle);

		if (a[middle] > v)
			return (binary_recursive(a, s, v, l, middle - 1));
		return (binary_recursive(a, s, v, middle + 1, r));
	}
	return (-1);
}

/**
 * binary_search - Use a binary searching method to find a value
 * @array: Array
 * @size: Size of array
 * @value: Value to find
 * Return: Index value is found at, -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);
	return (binary_recursive(array, size, value, 0, (size - 1)));
}
