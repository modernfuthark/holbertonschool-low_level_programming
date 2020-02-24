#include "holberton.h"
#include <stdio.h>
/**
 * _strpbrk - Locates the first instance of a byte in accept
 * @s: String
 * @accept: Filter
 * Return: Pointer to byte in s where instance of accept is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	if (s && accept)
	{
		for (i = 0; s[i]; i++)
		{
			for (j = 0; accept[j]; j++)
			{
				if (s[i] == accept[j])
					return (s += i);
			}
		}
	}
	return (NULL);
}
