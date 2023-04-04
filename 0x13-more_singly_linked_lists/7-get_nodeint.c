#include "lists.h"

/**
 * get_nodeint_at_index - return nth node of a listint_t linked list
 * @head: head of linked list
 * @index: index to return
 *
 * Return: pointer to index at position n
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int index_val = 0;

	current = head;
	while (current != NULL) /*navigate and return proper node*/
	{
		if (index_val == index)
			return (current);

		index_val++;
		current = current->next;
	}

	if (index > index_val) /* return null on index absent*/
		return (NULL);

	return (current);
}
