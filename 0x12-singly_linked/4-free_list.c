#include "lists.h"

/**
 * free_list - function that frees a list
 *
 * @head: pointer to the first node of the list
 *
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
