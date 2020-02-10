#include "holberton.h"
/**
 * print_alphabet_x10 - Print the alphabet x10
 *
 * Return: Nothing, function is void
 */

void print_alphabet_x10(void)
{
	char al = 'a';
	int i;

	for (i = 0; i < 10; i++)
	{
		while (al <= 'z')
		{
			_putchar(al);
			al++;
		}
		_putchar('\n');
		al = 'a';
	}
}
