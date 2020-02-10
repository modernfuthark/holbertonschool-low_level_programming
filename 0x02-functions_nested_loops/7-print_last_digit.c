#include "holberton.h"
/**
 * print_last_digit - Print last digit of n
 * @n: Number
 *
 * Return: Last digit of number
 */

int print_last_digit(int n)
{
	int last = n % 10;

	if (last < 0)
		last = last * -1;

	_putchar(last + '0');
	return (last);
}
