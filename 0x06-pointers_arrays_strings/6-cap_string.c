#include "holberton.h"
/**
 * cap_string - Capitalize a string
 * @str: String
 * Return: Pointer to string
 */

char *cap_string(char *str)
{
	int i, j;
	char compare[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 124};

	for (i = 0; str[i]; i++)
	{
		if (str[i] >= 98 && str[i] <= 122)
		{
			if (i == 0)
				str[i] -= 32;
			else
			{
				for (j = 0; compare[j]; j++)
					if (str[i - 1] == compare[j])
						str[i] -= 32;
			}
		}
	}
	return (str);
}
