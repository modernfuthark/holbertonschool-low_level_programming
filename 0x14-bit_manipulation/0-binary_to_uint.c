#include "holberton.h"
/**
 * binary_to_uint - Convert a binary string to an unsigned int
 * @b: String of binary
 * Return: Converted number, 0 on errors
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result;
	int i;

	if (!b)
		return (0);

	for (result = 0, i = 0; b[i]; i++)
	{
		if (b[i] == '1')
			result = (result << 1) | 1;
		else if(b[i] == '0')
			result <<= 1;
		else
			return (0);
	}

	return (result);
}
