#include "dog.h"
#include <stdio.h>

/**
 * free_dog - frees dogs
 * 
 * @d: name of username
 */

void free_dog(dog_t *d)
{
	if (!d)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
