#include "holberton.h"
/**
 * print_binary - Prints a number in binary
 * @n: Number to convert
 * Return: Nothing, function is void.
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	n = n & 1;
	_putchar(n + '0');
}
