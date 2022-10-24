#include "lists.h"

/**
 * list_len - returns the number of elements in the list
 *
 * @h: head pointer to the list
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
