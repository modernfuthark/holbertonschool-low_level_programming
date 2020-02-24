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
	if (s && c)
	{
		for (; s; s++)
		{
			if (*s == c)
				return (s);
		}
	}
	return (NULL);
}
