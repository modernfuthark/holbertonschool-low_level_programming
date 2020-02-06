#include <stdlib.h>
#include <stdio.h>
/**
 * main - Main function
 *
 * Return: 0 on success
 */

int main(void)
{
	char alpha;
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	for (alpha = 'a'; alpha <= 'f'; alpha++)
		putchar(alpha);

	putchar('\n');

	return (0);
}
