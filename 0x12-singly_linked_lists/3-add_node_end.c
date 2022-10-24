#include "lists.h"

/**
 * add_node_end - adds a node at the end of the elements
 *
 * @head: pointer to the first node in the list
 * @str: string to be added to the list
 *
 * Return: address of the new element
 * NULL if function fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = dup;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (las->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
