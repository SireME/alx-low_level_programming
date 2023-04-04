#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - free a listint_t list and set head to NULL
 * @head: head of list to free
 *
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *current, *temp;

	if (head == NULL || *head == NULL)
		return;

	current = *head;
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}

	*head = NULL;
}
