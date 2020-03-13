#include "variadic_functions.h"
/**
 * sum_them_all - Find the sum of any number of inputs
 * @n: Number of inputs
 * Return: Sum of all numbers, 0 if n = 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i = 0;
	va_list valist;

	if (n == 0)
		return (0);

	va_start(valist, n);
	while (i < n)
	{
		sum += va_arg(valist, int);
		i++;
	}
	return (sum);
}
