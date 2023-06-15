#include "lists.h"

/**
 * get_dnodeint_at_index - return node at specific index
 * @head: entry to list
 * @index: specific index
 *
 * Return: pointer to index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int track_i = 0;

	while (head != NULL)
	{
		if (track_i == index)
			return (head);

		head = head->next;
		track_i++;
	}

	return (NULL);
}
