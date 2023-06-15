#include "lists.h"
/**
 * add_dnodeint - insert node at start of linked list
 * @head: entry to list
 * @n: value to add
 *
 * Return: adress to new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(newnode));/*allocate newnode memory*/
	if (newnode == NULL)
	{
		free(newnode);
		printf("malloc");
		return (NULL);
	}

	/*populate newnode*/
	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = (*head);

	/* modify previous pointer of current head node*/
	if (*head != NULL)
		(*head)->prev = newnode;

	/* point newnode to head*/
	*head = newnode;

	return (*head);
}
