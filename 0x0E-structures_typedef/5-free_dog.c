#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Free struct d
 * @d: Struct
 * Return: Nothing, function is void
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
	}
	free(d);
}
