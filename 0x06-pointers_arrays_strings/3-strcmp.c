#include "holberton.h"
/**
 * _strcmp - Compare 2 strings
 * @s1: String 1
 * @s2: String 2
 * Return: idfk lol
 */

int _strcmp(char *s1, char *s2)
{
	int s1Len = 0;
	int s2Len = 0;
	int i;

	while (s1[++s1Len])
		;

	while (s2[++s2Len])
		;

	for (i = 0; s1[i] == s2[i]; i++)
		if (s1[i])
			return (0);

	if (s1Len < s2Len)
		return (s1[i] - s2[i]); /*s1 smaller than s2*/
	else
		return (s1[i] - s2[i]); /*s1 is bigger than s2*/
}
