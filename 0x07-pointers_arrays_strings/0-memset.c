#include "holberton.h"
#include <stdio.h>
/**
 * _memset - Set n bytes of s to b
 * @s: Memory to mod
 * @b: Char to fill n bytes of s
 * @n: Amount to fill
 * Return: Pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	if (s && b && n)
	{
		n--; /*Count like a computer!*/
		for (i = 0; i <= n; i++)
		{
			s[i] = b;
		}
	}
	return (s);
}
