#include "holberton.h"
#include <stdio.h>
/**
 * string_toupper - Change a string to become uppercase
 * @str: String
 * Return: Pointer to string
 */

char *string_toupper(char *str)
{
	int i;
	
	if (!str)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
	}

	return (str);
}
