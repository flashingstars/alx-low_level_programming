#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 *
 * @nmemb: number of elements of the array
 * @size: byte size of each array
 *
 * Return: pointer to memory allocated
 * NULL if it fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memb;
	char *a;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	memb = malloc(size * nmemb);

	if (memb == NULL)
		return (NULL);

	a = memb;

	for (index = 0; index < (size * nmemb); index++)
		a[index] = '\0';

	return (memb);
}
