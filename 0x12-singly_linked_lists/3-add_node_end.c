#include "lists.h"

/**
 * add_node_end - adds a node at the end of the list
 *
 * @head: pointer to head
 * @str: the string to be used
 *
 * Return: address of the new element
 * NULL if error is encountered
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end;
	list_t *temp = *head;
	unsigned int i = 0;

	while (str[i] != '\0')
		i++;

	end = malloc(sizeof(list_t));
	if (!end)
		return (NULL);

	end->str = strdup(str);
	end->len = i;
	end->next = NULL;

	if (*head == NULL)
	{
		*head = end;
		return (end);
	}

	while (temp->next)
		temp = temp->next;
	temp->next = end;

	return (end);
}

