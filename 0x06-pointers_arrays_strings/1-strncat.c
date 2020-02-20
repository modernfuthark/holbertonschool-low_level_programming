#include "holberton.h"
/**
 * _strncat - Concatenates 2 strings using n characters
 * @dest: Destination (to)
 * @src: Source (from)
 * @n: Characters to copy
 * Return: Pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int desLen = 0;

	if (dest && src && n > 0)
	{
		while (dest[++desLen])
			;

		for (i = 0; src[i] && i < n; i++)
		{
			dest[desLen + i] = src[i];
		}
		dest[desLen + i] = '\0';
	}

	return (dest);
}
