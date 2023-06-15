#include "lists.h"
/**
 * add_dnodeint_end - insert node at start of linked list
 * @head: entry to list
 * @n: value to add
 *
 * Return: address to new node or NULL on failure
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *current;

	newnode = malloc(sizeof(newnode));/*allocate newnode memory*/
	if (newnode == NULL)
	{
		free(newnode);
		printf("malloc");
		return (NULL);
	}

	/*populate newnode value*/
	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = NULL;

	current = *head;
	if (current == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	/*check traverse and add node at bottom if not NULL*/
	while (current != NULL)
	{
		if (current->next == NULL)
		{
			current->next = newnode;
			newnode->prev = current;
			newnode->next = NULL;
			break;
		}
		current = current->next;
	}

	return (*head);
}
