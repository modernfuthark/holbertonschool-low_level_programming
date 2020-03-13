#include "variadic_functions.h"
/**
 * _strdup - Duplicates a string
 * @str: String
 * Return: Pointer to new string, NULL if malloc failed
 */

char *_strdup(char *str)
{
	char *copy;
	int i, len = 0;

	if (!str)
		return (NULL);

	while (str[++len])
		;

	copy = malloc(sizeof(char) * len + 1);
	if (!copy)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		copy[i] = str[i];
	}

	copy[i] = '\0';
	return (copy);
}

/**
 * print_strings - Print any amount of strings
 * @separator: Separator between strings
 * @n: Number of inputs
 * Return: Nothing, function is void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *copy;

	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		copy = _strdup(va_arg(valist, char *));
		if (i == (n - 1) || !separator)
		{
			if (copy)
				printf("%s", copy);
			else
				printf("(nil)");
		}
		else
		{
			if (copy)
				printf("%s%s", copy, separator);
			else
				printf("(nil)%s", separator);
		}
	}
	free(copy);
	va_end(valist);
	printf("\n");
}
