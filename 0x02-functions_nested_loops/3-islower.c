#include "holberton.h"
/**
 * _islower - Check for lowercase characters
 * @c: Character to compare
 *
 * Return: 1 if lowercase, 0 if not
 */

int _islower(int c)
{
	char compare;

	for (compare = 'a'; compare <= 'z'; compare++)
	{
		if (compare == c)
			return (1);
	}

	return (0);
}
