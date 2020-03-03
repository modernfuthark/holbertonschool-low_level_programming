#include "holberton.h"
/**
 * str_concat - Combine 2 strings
 * @s1: String 1
 * @s2: String 2
 * Return: Pointer to combinded string, NULL on fail
 */

char *str_concat(char *s1, char *s2)
{
	char *result;
	int s1Len = 0, s2Len = 0, i;

	if (!s1 || !s2)
		return (NULL);

	while (s1[++s1Len])
		;
	while (s2[++s2Len])
		;

	result = malloc(sizeof(char *) * (s1Len + s2Len));
	if (!result)
		return (NULL);

	for (i = 0; i <= s1Len; i++)
	{
		result[i] = s1[i];
	}
	for (i = 0; i <= s2Len; i++)
	{
		result[s1Len + i] = s2[i];
	}

	return (result);
}
