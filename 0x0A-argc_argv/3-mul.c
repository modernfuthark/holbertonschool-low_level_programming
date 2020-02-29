#include "holberton.h"
/**
 * main - Main function
 * @argc: Number of arguments
 * @argv: Array of aruments
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
	int total;

	if (argc == 3)
	{
		total = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", total);
		return (0);
	}
	printf("Error\n");
	return (1);
}
