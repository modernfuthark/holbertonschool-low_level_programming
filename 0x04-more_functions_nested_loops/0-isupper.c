#include "holberton.h"
/**
 * _isupper - See if an input is uppercase
 * @c: Char to check
 * Return: 1 if upper, 0 if not
 */

int _isupper(int c)
{
	char compare = 'A';

	while (compare <= 'Z')
	{
		if (compare == c)
			return (1);
		compare++;
	}

	return (0);
}
