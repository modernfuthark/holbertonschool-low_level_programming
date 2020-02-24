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
	int i = 0, tracker = 0, flg = 0;

	if (haystack && needle)
	{
		for (; haystack; haystack++, tracker++)
		{
			if (*haystack == needle[i])
			{
				for (i = 0; needle[i]; i++)
				{
					if (haystack[i] != needle[i])
					{
						flg = 1;
						break;
					}
				}
				if (flg == 0)
					return (haystack);
				flg = 0;
				i = 0;
			}
		}
	}
	return (NULL);
}
