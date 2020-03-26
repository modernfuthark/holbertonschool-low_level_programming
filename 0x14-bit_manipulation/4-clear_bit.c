#include "holberton.h"
/**
 * clear_bit - Set bit at index of n to 0
 * @n: Number to modify
 * @index: Index to set to 0
 * Return: 1 on success, -1 on error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1 << index;

	*n = (*n & ~mask);
	return (1);
}
