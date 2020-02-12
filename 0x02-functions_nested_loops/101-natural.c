#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Print all natural numbers <1024, then add
 *
 * Return: 1 on success
 */

int main(void)
{
	int sum, i;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}

	printf("%d\n", sum);

	return (0);
}
