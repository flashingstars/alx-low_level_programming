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
	f (h)
	{
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		return (print_list(h->next) + 1);
	}
	return (0);
}
