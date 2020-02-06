#include <stdlib.h>
#include <stdio.h>
/**
 * main - Main function
 *
 * Return: 0 on success
 */

int main(void)
{
	int i;

	while (i <= 9)
	{
		putchar(i + '0');
		i++;
	}

	putchar('\n');

	return (0);
}
