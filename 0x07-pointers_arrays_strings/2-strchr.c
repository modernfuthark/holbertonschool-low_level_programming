#include "holberton.h"
#include <stdio.h>
/**
 * _strchr - Locate a char in string s
 * @s: String
 * @c: Star to find in s
 * Return: Pointer to c in s, NULL if not found
 */

char *_strchr(char *s, char c)
{
	int i;
	if (s && c)
	{
		for (i = 0; s[i]; i++)
		{
			if (s[i] == c)
				return (s + i);
		}
	}
	return (NULL);
}
