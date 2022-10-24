#include "lists.h"

/**
 * main - check code
 *
 * Return: 0 on success
 */

int main(void)
{
	list_t *head;
	list_t *new;
	list_t hello = {"world", 5, NULL};
	size_t n;

	head = &hello;
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		printf("Error\n");
		return (1);
	}
	new->str = strdup("Hello");
	new->len = 5;
	new->next = head;
	head = new;
	n = list_len(head);
	free(new->str);
	free(new);
	return (0);
}
