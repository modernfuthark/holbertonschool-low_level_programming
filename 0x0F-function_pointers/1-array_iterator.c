#include "function_pointers.h"
/**
 * array_iterator - Iterates through an array
 * @array: Array
 * @size: Size of array
 * @action: Function to run on elements
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}
