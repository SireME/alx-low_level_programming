#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - delete head node of pointer and return its value
 * @head: head of list
 *
 * Return: node value at head
 */

int pop_listint(listint_t **head)
{
	int headdata;
	listint_t *temp = *head;

	if (*head == NULL)
		return (0);

	headdata = temp->n; /*get date value from head*/

	*head = temp->next; /*move head to next pointer(deletion)*/

	free(temp); /*free deleted head node*/

	return (headdata);
}
