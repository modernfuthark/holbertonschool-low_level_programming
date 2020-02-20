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
	int i = 0;

	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;

	return (s1[i] - s2[i]);
}
