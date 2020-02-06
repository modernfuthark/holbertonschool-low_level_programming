#include <stdlib.h>
#include <stdio.h>
/**
 * main - Main function
 *
 * Return: 0 on success
 */

int main(void)
{
	int tens = 0;
	int ones = 0;

	while (tens <= 9)
	{
		while (ones <= 9)
		{
			putchar(tens + '0');
			putchar(ones + '0');
			if (ones < 10)
			{
				if (tens == 9 && ones == 9)
				{

				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			ones++;
		}
		tens++;
		ones = 0;
	}

	putchar('\n');

	return (0);
}
