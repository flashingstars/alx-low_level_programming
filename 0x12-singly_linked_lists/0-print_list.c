#include "lists.h"

/**
 * print_list - prints the nodes in the list
 *
 * @h: the head pointer to the first node
 *
 * Return: the number of nodes in the list
 */

size_t print_list(const list_t *h);
{
	size_t nodes = 0;

	while (h)
	{
		if (h->str ==NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
