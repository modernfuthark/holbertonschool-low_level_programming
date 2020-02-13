#include "holberton.h"
/**
 * print_line - Print a line n long
 * @n: Length of line
 * Return: Nothing, function is void
 */

void print_line(int n)
{
	int cnt;

	if (!(n <= 0))
		for (cnt = 0; cnt <= n; cnt++)
			_putchar('_');
	_putchar('\n');
}
