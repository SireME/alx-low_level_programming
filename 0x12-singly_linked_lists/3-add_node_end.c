#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to a pointer to the end node.
 * @str: string to be added.
 *
 * Return: The address of the new element or NULL if it failed.
 **/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	int len = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (*str++) /*length calculation*/
		len++;
	new_node->len = len;

	new_node->next = NULL; /*logic to add new node at end*/
	if (*head == NULL)
		*head = new_node;
	else
	{
		list_t *current = *head;

		while (current->next != NULL)
			current = current->next;

		current->next = new_node;
	}
	return (new_node);
}
