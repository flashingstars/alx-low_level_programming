#include "lists.h"

/**
 * add_node - Adds a node to the beginning of the list
 *
 * @head: pointer to the head of the list
 * @str: string to be added to the list
 *
 * Return: Address of the new element
 * NULL if failed
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
