#include "holberton.h"
/**
 * leet - 7r4ns1473 70 1337 73x7
 * @str: String
 * Return: Pointer to str
 */

char *leet(char *str)
{
	int i, j;
	char changer[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char result[] = {52, 52, 51, 51, 48, 48, 55, 55, 49, 49};

	for (i = 0; str[i]; i++)
	{
		for (j = 0; changer[j]; j++)
		{
			if (str[i] == changer[j])
			{
				str[i] = result[j];
				break;
			}
		}
	}

	return (str);
}
