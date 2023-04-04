#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - insert node at given position
 * @head: head pointer of node
 * @idx: index of liste where new node should be added
 * @n: value of new node
 *
 * Return:pointer with new node inserted or NULL on failure
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *newnode, *temp;
	unsigned int index_vl = 0;

	newnode = malloc(sizeof(listint_t)); /*create and initialise node to insert*/
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;

	if ((idx == 0) && (index_vl == 0))/*handle index of zero*/
	{
		newnode->next = *head;
		*head = newnode;

		return (newnode);
	}

	current = *head;
	while (current != NULL)/*traverse through list*/
	{
		if (index_vl == idx - 1) /*insert node at index*/
		{
			temp = current->next;
			current->next = newnode;
			newnode->next = temp;
			break;
		}
		index_vl++;
		current = current->next;
	}

	if (idx > index_vl + 1) /*handle impossible to insert case*/
		return (NULL);

	return (*head);
}
