#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at a specific index
 * @h: entry to list
 * @idx: index
 * @n: integer value to add
 *
 * Return: address of new node or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int pos = 0;
	dlistint_t *newnode, *current;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		printf("malloc\n");
		return (NULL);
	}
	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = NULL;
	current = *h;
	if (idx == 0)
	{
		newnode->next = current;
		if (current != NULL)
			current->prev = newnode;
		*h = newnode;
		return (newnode);
	}

	while (current != NULL && pos < idx - 1)
	{
		current = current->next;
		pos++;
	}

	if (current == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->next = current->next;
	if (current->next != NULL)
		current->next->prev = newnode;
	current->next = newnode;
	newnode->prev = current;
	return (newnode);
}

