#include "holberton.h"
/**
 * puts2 - Print every other line of a string
 * @str: String
 * Return: Nothing, function void
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
