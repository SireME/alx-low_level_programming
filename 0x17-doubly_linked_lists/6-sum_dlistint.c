#include "lists.h"

/**
 * sum_dlistint - sum all linked list content
 * @head: linked list entry
 *
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	int list_sum = 0;

	while (head != NULL)
	{
		list_sum += head->n;
		head = head->next;
	}

	return (list_sum);
}
