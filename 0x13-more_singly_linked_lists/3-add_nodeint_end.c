#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - add new node at end of listint_t list
 * @head: node t o add to
 * @n: value to add to linked list
 *
 * Return: node with added node or NULL on failure
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current, *newnode;

	newnode = malloc(sizeof(newnode)); /*create, check and initialise node*/
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;/*initialise node*/
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	current = *head;
	while (current->next != NULL) /*traverse list, to the end*/
		current = current->next;

	current->next = newnode; /*add new node at end*/

	return (*head);
}
