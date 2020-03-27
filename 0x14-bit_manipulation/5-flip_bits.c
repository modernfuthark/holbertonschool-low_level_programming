#include "holberton.h"
/**
 * flip_bits - Get the amount of bits needed to be flipped
 * @n: Number
 * @m: Number 2
 * Return: Number of bits to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask;
	unsigned int i;

	mask = n ^ m;
	for (i = 0; mask != 0;)
	{
		if ((1 & mask) > 0)
			i++;
		mask >>= 1;
	}
	return (i);
}
