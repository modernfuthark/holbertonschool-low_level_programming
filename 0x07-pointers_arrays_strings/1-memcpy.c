#include "holberton.h"
/**
 * _memcpy - Copy memory from src to dest
 * @dest: To
 * @src: From
 * @n: Size
 * Return: Pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	if (dest && src && n)
	{
		n--; /*Count like a computer :(*/
		for (i = 0; i <= n; i++)
		{
			dest[i] = src[i];
		}
	}

	return (dest);
}
