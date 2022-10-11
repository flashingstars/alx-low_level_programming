#include "dog.h"

/**
 * init_dog - function that initializes variables of type struct dog
 *
 * @d: name of the first user
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
