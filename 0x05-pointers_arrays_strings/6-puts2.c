#include "holberton.h"
/**
 * puts2 - Print every other line of a string
 * @str: String
 * Return: Nothing, function void
 */

void puts2(char *str)
{
	int i;
	int len = 0;

	while (str[len] != '\0')
		len++;
	len--;

	for (i = 0; i <= len; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
