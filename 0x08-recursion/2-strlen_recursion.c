#include "holberton.h"
/**
 * _strlen_recursion - Give the length of a string
 * @s: String
 * Return: Length of s
 */

int _strlen_recursion(char *s)
{
	int len;

	if (*s)
	{
		len = _strlen_recursion(s + 1);
		len++;
	}
	return (len);
}
