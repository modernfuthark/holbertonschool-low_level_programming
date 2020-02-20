#include "holberton.h"
/**
 * _strcmp - Compare 2 strings
 * @s1: String 1
 * @s2: String 2
 * Return: 0 if the same
 * > 0 if s1 is smaller than s2
 * < 0 if s1 is bigger than s1
 */

int _strcmp(char *s1, char *s2)
{
	int s1Len = 0;
	int s2Len = 0;
	int i;

	if (!(s1) || !(s2))
		return (0);


	while (s1[++s1Len])
		;

	while (s2[++s2Len])
		;

	for (i = 0; s1[i] == s2[i]; i++)
		if (s1[i])
			return (0);

	return (s1[i] - s2[i]);
}
