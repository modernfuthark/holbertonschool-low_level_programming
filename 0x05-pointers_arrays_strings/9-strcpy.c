#include "holberton.h"
/**
 * _strcpy - String copy
 * @dest: Buffer
 * @src: Source
 * Return: Pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i++] = '\0';

	return (dest);
}
