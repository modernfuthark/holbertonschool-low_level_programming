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
	int j;

	if (s && accept)
	{
		for (; s; s++)
		{
			for (j = 0; accept[j]; j++)
			{
				if (*s == accept[j])
					return (s);
			}
		}
	}
	return (NULL);
}
