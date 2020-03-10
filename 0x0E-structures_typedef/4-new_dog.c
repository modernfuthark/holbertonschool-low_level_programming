#include "dog.h"
char *_strdup(char *);
#include <stdlib.h>
/**
 * new_dog - Create a new dog data struct
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 * Return: Pointer to new struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *temp;
	char *sName;
	char *sOwner;

	temp = malloc(sizeof(dog_t));
	if (!temp)
		return (NULL);

	sName = _strdup(name);
	sOwner = _strdup(owner);
	if (!sName || !sOwner)
	{
		free(sName);
		free(sOwner);
		free(temp);
		return (NULL);
	}

	temp->name = sName;
	temp->age = age;
	temp->owner = sOwner;
	return (temp);
}

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
