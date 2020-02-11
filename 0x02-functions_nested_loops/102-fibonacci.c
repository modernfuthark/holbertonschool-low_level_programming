#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Main function
 *
 * Return: 0 on sucess
 */

int main(void)
{
	unsigned long int first = 1;
	unsigned long int second = 0;
	unsigned long int result = 0;
	int i;

	for (i = 0; i < 50; i++)
	{
		result = first + second;
		printf("%ld", result);
		if (i != 49)
			printf(", ");
		first = second;
		second = result;
	}
	printf("\n");

	return (0);
}
