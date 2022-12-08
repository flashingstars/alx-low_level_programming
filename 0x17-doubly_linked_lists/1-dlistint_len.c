#include "lists.h"

/**
 * dlistint_len - printing the number of elements present
 *
 * @h: pointer to first node
 * Return: Number of elements in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (count);
	while (h)
	{
		count++;
		h= h->next;
	}
	return (count);
}
