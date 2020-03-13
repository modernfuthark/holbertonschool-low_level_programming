#include "variadic_functions.h"
/**
 * print_numbers - Print any number of ints
 * @separator: Separator between numbers
 * @n: Number of inputs
 * Return: Nothing, function is void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		if (i == (n - 1) || !separator)
			printf("%d", va_arg(valist, int));
		else
			printf("%d%s", va_arg(valist, int), separator);
	}
	printf("\n");
	va_end(valist);
}
