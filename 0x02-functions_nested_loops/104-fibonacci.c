#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Main function
 *
 * Return: 0 (on sucess)
 */

int main(void)
{
	long double first = 0;
	long double second = 1;
	long double result = 0;
	int i;

	for (i = 0; i < 99; i++)
	{
		result = first + second;
		printf("%.0Lf", result);
		if (i != 98)
			printf(", ");
		first = second;
		second = result;
	}
	printf("\n");

	return (0);
}
