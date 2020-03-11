#include "function_pointers.h"
/**
 * int_index - Find an int in an array
 * @array: Array to index
 * @size: Size of array
 * @cmp: Comparision function
 * Return: index of int if found, -1 on error or fail
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (((*cmp)(array[i])) != 0)
			return (i);
	}
	return (-1);
}
