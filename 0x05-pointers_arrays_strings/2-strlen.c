#include "holberton.h"
/**
 * _strlen - Length of string
 * @s: String to test
 * Return: Length of string s
 */

int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
		l++;

	return (l);
}
