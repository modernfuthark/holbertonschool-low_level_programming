#include <stdio.h>
/**
 * main - Main function
 *
 * Return: 0 on success
 */

int main(void)
{
	printf("Size of %s: %d byte(s)\n", "a char", sizeof(char));
	printf("Size of %s: %d byte(s)\n", "an int", sizeof(int));
	printf("Size of %s: %d byte(s)\n", "a long int", sizeof(long int));
	printf("Size of %s: %d byte(s)\n", "a long long int", sizeof(long long int));
	printf("Size of %s: %d byte(s)\n", "a float", sizeof(float));

	return (0);
}
