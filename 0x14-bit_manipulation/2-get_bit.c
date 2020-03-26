#include "holberton.h"
/**
 * get_bit - Get the bit at a specific index
 * @n: Number
 * @index: Index to get
 * Return: Bit of index of n, -1 on error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1;

	mask = mask << index;

	if (mask & n)
		return (1);
	else
		return (0);
}
