#include "holberton.h"
#include <stdio.h>
/**
 * string_nconcat - Concat 2 strings by n bytes
 * @s1: String 1
 * @s2: String 2
 * @n: Size
 * Return: Pointer to new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i, j;
	char *result;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	if (n <= 0)
		return (NULL);

	while (s1[len1])
		++len1;
	while (s2[len2])
		++len2;
	if (n >= len2)
		n = len2;

	result = malloc(sizeof(char) * (len1 + n) + 1);
	if (!result)
		return (NULL);

	for (i = 0; s1[i]; i++)
	{
		result[i] = s1[i];
	}
	for (j = 0; j < n && s2[j]; j++)
	{
		result[i + j] = s2[j];
	}
	result[i + j] = '\0';

	return (result);
}
