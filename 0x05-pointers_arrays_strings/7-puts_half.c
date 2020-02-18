#include "holberton.h"
/**
 * puts_half - Print half of a string
 * @str: String
 * Return: Nothing, function is void
 */

void puts_half(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;

	if (len % 2 != 0)
		len = (len - 1) / 2;
	else
		len = len / 2;


	for (; str[len] != '\0'; len++)
		_putchar(str[len]);

	_putchar('\n');
}
