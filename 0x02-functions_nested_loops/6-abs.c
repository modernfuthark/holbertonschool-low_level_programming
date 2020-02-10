#include "holberton.h"
/**
 * _abs - Print absolute value
 * @n: Number to check
 *
 * Return: Absolute value of n
 */

int _abs(int n)
{
	if (n > 0)
		return (n);
	if (n == 0)
		return (0);

	return (n * -1);
}
