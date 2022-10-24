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
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
