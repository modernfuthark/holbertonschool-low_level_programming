#include "holberton.h"
/**
 * create_array - Creates an array of c of size
 * @size: Size of array
 * @c: Char to fill
 * Return: Pointer to array, NULL on fail
 */

char *create_array(unsigned int size, char c)
{
	char *fillMe;
	unsigned int i;
	
	fillMe = malloc(sizeof(char) * size);
	if (!fillMe)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		fillMe[i] = c;
	}
	return (fillMe);
}
