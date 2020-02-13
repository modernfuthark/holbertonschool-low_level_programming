#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * main - Print largest prime factor of a hardcoded number
 *
 * Return: 0 on success
 */

int main(void)
{
	long int n = 612852475143;
	long int i;

	while (n % 2 == 0)
	{
		n = n / 2;
	}

	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			n = n / i;
		}
	}

	if (n > 2)
		printf("%ld", n);

	printf("\n");
	return (0);
}
