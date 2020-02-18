#include "holberton.h"
/**
 * rev_string - Reverse a string
 * @s: String
 * Return: Nothing, function is void
 */

void rev_string(char *s)
{
	int len = 0;
	int dec = 0;
	int inc = 0;
	char temp[999];

	while (s[len] != '\0')
		len++;
	len--;

	while (inc <= len)
	{
		temp[inc] = s[inc];
		inc++;
	}


	dec = len;
	inc = 0;
	while (inc <= len)
	{
		s[inc] = temp[dec];
		inc++;
		dec--;
	}

	s[inc++] = '\0';
}
