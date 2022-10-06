#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * @ptr: a pointer to the memory previously allocated
 * @old_size: size in bytes of the allocated space to ptr
 * @new_size: size in bytes for the new memory block
 *
 * Return: pointer to reallocated memory
 * NULL on erorr
 * ptr if new_size == old_size
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *mem;
	char *ptr_copy, *fill;
	unsigned int index;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		mem = malloc(new_size);

		if (mem == NULL)
			return (NULL);

		return (mem);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr_copy = ptr;
	mem = malloc(sizeof(*ptr_copy) * new_size);

	if (mem == NULL)
	{
		free(ptr);
		return (NULL);
	}

	fill = mem;

	for (index = 0; index < old_size && index < new_size; index++)
		fill[index] = *ptr_copy++;

	free(ptr);
	return (mem);
}
