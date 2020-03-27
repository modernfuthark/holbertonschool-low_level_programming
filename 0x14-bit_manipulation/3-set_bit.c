#include "holberton.h"
/**
 * set_bit - Set bit at an index to 1
 * @n: number to modify
 * @index: Index to modify
 * Return: 1 on success, -1 on error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
