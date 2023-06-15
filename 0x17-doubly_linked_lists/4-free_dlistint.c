#include "lists.h"
/**
 * free_dlistint - free linked list
 * @head: entry to linked list
 *
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		if (head->prev != NULL)
			free(head->prev);
		if (head->next == NULL)
		{
			free(head);
			break;
		}
		head = head->next;
	}
}
