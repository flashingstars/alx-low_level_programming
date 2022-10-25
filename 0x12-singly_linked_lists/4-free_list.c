#include "lists.h"

/**
 * free_list - function that frees a list
 *
 * @head: pointer to the first node of the list
 *
 */

void free_list(list_t *head)
{
	list_t *land;

	while ((land = head) != NULL)
	{
		head = head->next;
		free(land->str);
		free(land);
	}
}
