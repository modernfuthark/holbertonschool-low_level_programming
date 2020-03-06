#include "holberton.h"
/**
 * array_range - Fill an array with numbers min to max
 * @min: Minimum
 * @max: Maximum
 * Return: Pointer to array of numbers
 */

int *array_range(int min, int max)
{
	int *result;
	int i;

	if (min > max)
		return (NULL);

	result = malloc(sizeof(int) * (max - min + 1));
	if (!result)
		return (NULL);

	for (i = 0; min + i <= max; i++)
		result[i] = min + i;

	return (result);
}
