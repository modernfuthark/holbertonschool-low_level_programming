#include "3-calc.h"
#include <string.h>
/**
 * main - Preform calculations
 * @argc: Argument count
 * @argv: Array of arguments
 * Return: 0 on success, exit with 98, 99, and 100 on errors
 */

int main(int argc, char *argv)
{
	int res = 0, n1, n2;
	int (*calc)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	calc = (*get_op_func)(argv[2]);
	if (!calc || strlen(argv[2]) != 1)
	{
		printf("Error\n");
		exit(99);
	}

	if (n2 == 0 && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	res = calc(n1, n2);
	printf("%d\n", res);

	return (0);
}
