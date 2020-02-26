#include "holberton.h"
/**
 * _puts_recursion - Print a string recursivly
 * @s: String to print
 * Return: Nothing, function is void
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
