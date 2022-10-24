#include "lists.h"


/**
 * _strlen - finds the length of a string
 *
 * @str: string to find the length of
 *
 *  Return: length of string
 */
unsigned int _strlen(char *str)
{
	unsigned int i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}

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
	list_t *new;

	if (str == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen(new->str);
	new->next = *head;
	*head = new;
	return (new);
}
