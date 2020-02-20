#include "holberton.h"
/**
 * _strcat - Concatenates 2 strings
 * @dest: Destination (to)
 * @src: Source (from)
 * Return: Pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int desLen = 0;

	if (src)
	{
		while (dest[++desLen])
			;

		for (i = 0; src[i]; i++)
		{
			dest[desLen + i] = src[i];
		}
		dest[desLen + i] = '\0';
	}

	return (dest);
}
