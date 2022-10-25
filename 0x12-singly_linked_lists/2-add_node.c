#include "lists.h"

/**
 * add_node - adding a new node at the beginning of the list
 *
 * @head: address of the first element of a list
 * @str: pointer to a string that will be duplicated
 *
 * Return: either the address of the new element or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	unsigned int i = 0;

	while (str[i])
		i++;

	temp = malloc(sizeof(list_h));

	if (!temp)
		return (NULL);

	temp->str = strdup(str);
	temp->len = i
	temp->next = (*head);
	(*head) = temp;

	free(temp);

	return (new);
}
