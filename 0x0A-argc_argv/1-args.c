#include "holberton.h"
/**
 * main - Main function
 * @argc: Number of arguments
 * @argv: Unused
 * Return: 0 on success
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	if (argc > 0)
		printf("%d\n", argc - 1);
	else
		printf("%d\n", argc);
	return (0);
}
