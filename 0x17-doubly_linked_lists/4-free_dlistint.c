#include "lists.h"

/**
 * free_dlistint - frees all nodes in a list
 *
 * @head: pointer to first node
 *Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head;
		head = heaad->next;
		free(temp);
	}
}
