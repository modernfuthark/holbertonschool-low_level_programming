#include "holberton.h"
/**
 * malloc_checked - Allocates memory
 * @b: Size of malloc
 * Return: Pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *result;

	if (b == 0)
		return (NULL);

	result = malloc(b);
	if (!result)
		exit(98);

	return (result);
}
