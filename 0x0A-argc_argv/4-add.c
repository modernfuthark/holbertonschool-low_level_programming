#include "holberton.h"
#include <ctype.h>
/**
 * main - Main function
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0 on success, -1 on error
 */

int main(int argc, char *argv[])
{
	int sum = 0, i, check;

	if (argc > 0)
	{
		for (i = 1; i < argc; i++)
		{
			check = isdigit(*argv[i]);
			if (check != 0)
				sum += atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (-1);
			}
		}
		printf("%d\n", sum);
		return (0);
	}
	printf("Error\n");
	return (-1);
}
