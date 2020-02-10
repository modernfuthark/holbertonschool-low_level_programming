#include "holberton.h"
/**
 * print_alphabet - Print the alphabet (lowercase)
 *
 * Return: Nothing, function is void
 */

void print_alphabet(void)
{
	char al = 'a';

	while (al <= 'z')
	{
		_putchar(al);
		al++;
	}

	_putchar('\n');
}
