#include <stdlib.h>
#include <stdio.h>
/**
 * main - Get the opcode of function main
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0 on success, exit with 1 or 2 on error
 */

int main(int argc, char *argv[])
{
	int i, num;
	char *point;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	point = (char *)&main;
	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < num; i++)
	{
		printf("%02hhx", point[i]);
		if (i < num - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
