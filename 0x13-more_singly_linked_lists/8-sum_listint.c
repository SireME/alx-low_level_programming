#include "lists.h"

/**
 * sum_listint - sum of linked list data
 * @head: head of pointer linked list
 *
 * Return: sum of all data in linked list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
