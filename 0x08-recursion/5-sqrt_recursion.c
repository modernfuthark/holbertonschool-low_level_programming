#include "holberton.h"
/**
 * _sqrt_recursion - Finds the square root of n
 * @n: Number to calculate with
 * Return: Square root of n
 */

int _sqrt_recursion(int n)
{
	int smal, larg;

	if (n < 0)
		return (-1);
	else if (n < 2)
		return (n);
	else
	{
		smal = _sqrt_recursion(n / 4) * 2;
		larg = smal + 1;
	}

	if (larg % 2 != 0 && n % 2 != 0 && n % 5 != 0)
		return (-1);
	if ((larg * larg) > n)
		return (smal);
	
	return (larg);
}
