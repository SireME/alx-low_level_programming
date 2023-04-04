#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - free a listint_t list
 * @head: head of list
 *
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *current, *temp;

	current = head;
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
}
