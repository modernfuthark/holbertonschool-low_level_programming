#include "holberton.h"
/**
 * _isalpha - Check for alphabet
 * @c: Character to check
 *
 * Return: 1 if true, 0 if false
 */

int _isalpha(int c)
{
	char compare;

	for (compare = 'a'; compare <= 'z'; compare++)
	{
		if (compare == c)
			return (1);
	}
	for (compare = 'A'; compare <= 'Z'; compare++)
	{
		if (compare == c)
			return (1);
	}

	return (0);
}
