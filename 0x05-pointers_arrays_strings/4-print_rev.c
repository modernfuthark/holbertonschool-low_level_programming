#include "holberton.h"
/**
 * print_rev - Print a string in reverse
 * @s: String
 * Return: Nothing, function is void
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	for (; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
