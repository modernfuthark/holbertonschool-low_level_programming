#include "holberton.h"
/**
 * _strlen - String Length
 * @str: String
 * Return: Size of str
 */

int _strlen(char *str)
{
	int len;

	while (str[len])
		++len;
	return (len);
}

/**
 * argstostr - Arguments to string
 * @ac: Number of arguments
 * @av: Array of arguments
 * Return: Pointer to new string, NULL on error
 */

char *argstostr(int ac, char **av)
{
	int size, i, j, desI;
	char *dest;

	if (ac == 0 || !av)
		return (NULL);

	for (size = 0, i = 0; i < ac; i++)
	{
		size += _strlen(av[i]);
	}

	dest = malloc(size + ac + 1);
	if (!dest)
		return (NULL);

	for (i = 0, desI = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			dest[desI] = av[i][j];
			desI++;
		}
		dest[desI] = '\n';
		desI++;
	}
	dest[desI] = '\0';
	return (dest);
}
