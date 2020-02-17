#include "holberton.h"
/**
 * _puts - Print a string
 * @str: String to print
 * Return: Nothing, function is void
 */

void _puts(char *str)
{
	int i;

	while (str[i] != '\0')
		_putchar(str[i++]);

	_putchar('\n');
}
