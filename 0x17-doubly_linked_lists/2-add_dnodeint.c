#include "lists.h"

/**
 * add_dnodeint - adding a node at the beginning of the list
 *
 * @head: pointer to pointer to the first node
 * @n: data to be put in the new node
 *
 * Return: new node or NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->prev = NULL;
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	new->next = *head;
	(*head)->prev = new;
	*head = new;
	return (new);
}
