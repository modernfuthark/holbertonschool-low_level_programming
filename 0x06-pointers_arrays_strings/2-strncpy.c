#include "holberton.h"
/**
 * _strncpy - Copy src into dest for n characters
 * @dest: Destination (to)
 * @src: Source (from)
 * @n: Characters
 * Return: Pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	if (dest && src && n > 0)
	{
		while (src[i] && i < n)
		{
			dest[i] = src[i];
			i++;
		}
		if (src && i < n)
			dest[i] = '\0';
	}

	return (dest);
}
