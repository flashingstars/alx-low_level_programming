#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node
 * @head: pointer to the first node
 * @index: position of the nth node
 * Return: nth node, NULL on failure
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0;
	dlistint_t *temp;

	if (head == NULL)
	{
		return (NULL);
	}

	temp = head;
	if (index == 0)
	{
		return (temp);
	}

	while (temp && n <= index - 1)
	{
		n++;
		temp = temp->next;
	}
	return (temp);
}
