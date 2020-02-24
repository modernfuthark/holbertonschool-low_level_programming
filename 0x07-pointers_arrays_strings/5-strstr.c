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
	int i = 0, tracker = 0;

	if (haystack && needle)
	{
		for (; haystack; haystack++)
		{
			if (*haystack == needle[i])
			{
				for (i = 0; needle[i]; i++)
				{
					if (haystack[tracker + i] != needle[i])
						break;
				}
				return (haystack);
			}
			tracker++;
		}
	}
	return (NULL);
}
