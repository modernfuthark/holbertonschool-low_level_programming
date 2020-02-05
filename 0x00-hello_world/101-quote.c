#include <stdio.h>
#include <unistd.h>
/**
 * main - Main function
 *
 * Return: 1 on success
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 57);
	write(2, "\n", 1);

	return (1);
}
