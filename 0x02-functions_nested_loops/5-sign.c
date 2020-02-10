#include "holberton.h"
/**
 * print_sign - Print the sign of a num
 * @n: Number to check
 *
 * Return: Sign of the number, - if zero
 */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	_putchar (0 + '0');
	return (0);
}
