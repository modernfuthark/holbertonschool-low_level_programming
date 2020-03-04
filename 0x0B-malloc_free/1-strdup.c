#include "holberton.h"
/**
 * _strdup - Duplicates a string
 * @str: String
 * Return: Pointer to new string, NULL if malloc failed
 */

char *_strdup(char *str)
{
	char *copy;
	int i, len = 0;

	if (!str)
		return (NULL);

	while (str[++len])
		;

	copy = malloc(sizeof(char) * len + 1);
	if (!copy)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		copy[i] = str[i];
	}

	copy[i] = '\0';
	return (copy);
}
