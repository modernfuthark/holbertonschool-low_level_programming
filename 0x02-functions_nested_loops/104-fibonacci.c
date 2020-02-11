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
	double first = 0;
	double second = 1;
	double result = 0;
	int i;

	for (i = 0; i < 98; i++)
	{
		result = first + second;
		printf("%.0lf", result);
		if (i != 97)
			printf(", ");
		first = second;
		second = result;
	}
	printf("\n");

	return (0);
}
