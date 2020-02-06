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

	for (i = 0; i <= 9; i++)
	{
		if (i != 9)
		{
			putchar(i + '0');
			putchar(',');
			putchar(' ');
		}
		else
			putchar(i + '0');
	}

	putchar('\n');

	return (0);
}
