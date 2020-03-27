#include "holberton.h"
/**
 * clear_bit - Set bit at index of n to 0
 * @n: Number to modify
 * @index: Index to set to 0
 * Return: 1 on success, -1 on error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	*n = (*n & ~(1 << index));
	return (1);
}
