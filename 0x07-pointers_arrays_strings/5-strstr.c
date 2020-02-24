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
	int i = 0, trk, flg = 0;

	for (trk = 0; haystack[trk]; trk++)
	{
		if (haystack[trk] == needle[i])
		{
			for (i = 0; needle[i]; i++)
			{
				if (haystack[trk + i] != needle[i])
				{
					flg = 1;
					break;
				}
			}
			if (flg == 0)
			{
				haystack += trk;
				return (haystack);
			}
			flg = 0;
		}
	}
	return (NULL);
}
