#include "holberton.h"
/**
 * _isdigit - Checks if something is a number
 * @c: To check
 * Return: 1 if a digit, 0 if not
 */

int _isdigit(int c)
{
	int compare;

	for (compare = '0'; compare <= '9'; compare++)
	{
		if (compare == c)
			return (1);
	}

	return (0);
}
