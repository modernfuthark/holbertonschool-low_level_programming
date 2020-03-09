#include "dog.h"
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
	char *sName = name;
	char *sOwner = owner;

	temp = malloc(sizeof(dog_t));
	if (!temp)
		return (NULL);
	if (!name || !owner)
		return (NULL);

	temp->name = sName;
	temp->age = age;
	temp->owner = sOwner;

	return (temp);
}
