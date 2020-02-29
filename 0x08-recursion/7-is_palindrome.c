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

/**
 * helper - Help me do things pls
 * @s: String
 * @len: Length
 * Return: yes
 */

int helper(char *s, int len)
{
	return (helper(s + 1, len - 1));
}

/**
 * is_palindrome - Determines if string s is a palindrome
 * @s: String
 * Return: 1 if s is a palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);
	return(is_palindrome(s + 1));
}
