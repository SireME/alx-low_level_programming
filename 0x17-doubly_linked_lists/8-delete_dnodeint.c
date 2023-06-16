#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at specific index
 * @head: node head
 * @index: index of node to delete
 *
 * Return: integer 1 for success or -1 for failure to delete
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int int_i = 0;
	dlistint_t *current, *temp;

	if (*head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	while (current != NULL && int_i < index)
	{
		current = current->next;
		int_i += 1;
	}

	if (current == NULL)
		return (-1);

	temp = current;
	current->prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;
	free(temp);
	return (1);
}

