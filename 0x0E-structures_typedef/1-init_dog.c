#include "dog.h"
/**
 * init_dog - Create new dog data
 * @d: Struct
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 * Return: Nothing, function is void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		if (name)
			d->name = name;
		d->age = age;
		if (owner)
			d->owner = owner;
	}
}
