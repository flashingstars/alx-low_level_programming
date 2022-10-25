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
	struct list_s *temp = NULL;
	int i;

	temp = (struct list_s *)malloc(sizeof(struct list_s));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		;
	temp->len = i;
	temp->next = *head;
	*head = temp;
	return (temp);
}
