#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - A function that frees dogs.
 * @d: pointer to dog_t to be freed
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
