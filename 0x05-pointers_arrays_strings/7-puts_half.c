#include "holberton.h"
/**
 * puts_half - Print half of a string
 * @str: String
 * Return: Nothing, function is void
 */

void puts_half(char *str)
{
	int len = 0;
	int i;

	while (str[len] != '\0')
		len++;


	if (len % 2 == 0)
	{
		len = len / 2;
		i = len;
	}
	else
	{
		len = (len - 1) / 2;
		i = len + 1;
	}


	for (; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');
}
