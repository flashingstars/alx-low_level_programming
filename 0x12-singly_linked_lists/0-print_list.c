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
	int temp, num = 0;

	temp = *h;

	while (temp != NULL)
	{
		num += 1;
		temp = temp->next;
	}
	printf("%d\n", num);
}
