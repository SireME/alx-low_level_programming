#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - delete node at specific index
 * @head: head or entry node
 * @index: index to delete
 *
 * Return: status of deletion -1 or 1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *tempv;
	unsigned int ind;

	if (head == NULL || *head == NULL)
		return (-1);

	tempv = *head;/*delete if index is zero*/
	if (index == 0)
	{
		*head = (*head)->next;
		free(tempv);
		return (1);
	}

	current = *head; /*delete other notes*/
	for (ind = 0; ind < index && current != NULL; ind++)
	{
		tempv = current;
		current = current->next;
	}

	if (current == NULL)/*exit if current node is NULL*/
		return (-1);

	tempv->next = current->next;
	free(current);

	return (1);
}
