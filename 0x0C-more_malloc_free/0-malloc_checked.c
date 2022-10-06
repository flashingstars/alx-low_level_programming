#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: the number of bytes to be allocated
 *
 * Return: termination with
 * status value of 98
 * or pointer to memory block
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	
	return (ptr);
}
