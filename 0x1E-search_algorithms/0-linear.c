#include "search_algos.h"

/**
 * linear_search - Search through an array liniarly
 * @array: Array
 * @size: Size of array
 * @value: Value to find
 * Return: Index of found value, -1 if not found
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
