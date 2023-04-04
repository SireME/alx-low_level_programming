#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - add new node at start of listint_t list
 * @head: node t o add to
 * @n: value to add to linked list
 *
 * Return: node with added node or NULL on failure
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t)); /*create, check and initialise node*/
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;/*initialise node*/
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
