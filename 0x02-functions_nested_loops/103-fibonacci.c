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
	unsigned long int first = 0;
	unsigned long int second = 1;
	unsigned long int result = 0;
	unsigned long int sum = 0;

	while (result < 4000000)
	{
		result = first + second;
		if (result % 2 == 0)
			sum += result;
		first = second;
		second = result;
	}
	printf("%ld\n", sum);

	return (0);
}
