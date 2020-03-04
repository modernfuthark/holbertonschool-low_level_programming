#include "holberton.h"
#include <stdio.h>
/**
 * strtow - Split a string into a 2D array
 * @str: String
 * Return: Pointer to 2d array of split string str
 */

char **strtow(char *str)
{
	char **result;
	int i, flag = 0, wrdCt = 0;
	int len = 0;

	if (!str)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ' && flag == 0) /*Wait for new word*/
		{
			flag = 1;
			wrdCt++;
		}
		else if (str[i] != ' ')
		{
			flag = 0;
			len++;
		}
	}
	printf("Char total: %d\n", len);
	printf("Word total: %d\n", wrdCt - 1);

	result = malloc(sizeof(char *) * 2);
	return (result);
}
