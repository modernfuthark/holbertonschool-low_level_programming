#include "holberton.h"
#include <stdio.h>
/**
 * _strstr - Locate a substring needle within haystack
 * @haystack: Parent string
 * @needle: Subsstring / Child string
 * Return: Pointer to first match of needle within haystack
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, trk;

	if (!*haystack)
		return (NULL);
	if (!*needle)
		return (haystack);
	for (trk = 0; haystack[trk]; trk++)
	{
		if (haystack[trk] == needle[i])
		{
			for (i = 0; needle[i]; i++)
			{
				if (haystack[trk + i] != needle[i])
					break;
			}
			if (needle[i] == '\0')
				return (haystack += trk);
			i = 0;
		}
	}
	return (NULL);
}
