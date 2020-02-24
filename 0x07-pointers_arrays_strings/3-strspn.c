#include "holberton.h"
/**
 * _strspn - Returns len for every instance of accept found in s
 * @s: String
 * @accept: Filter
 * Return: Number of instances of accept found in s (len)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, len = 0;

	if (s && accept)
	{
		for (i = 0; s[i] && s[i] != ' '; i++)
		{
			for (j = 0; accept[j]; j++)
			{
				if (s[i] == accept[j])
				{
					len++;
					break;
				}
			}
		}
	}
	return (len);
}
