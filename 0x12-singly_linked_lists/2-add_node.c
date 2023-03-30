#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to a pointer to the head node.
 * @str: string to be added.
 *
 * Return: The address of the new element or NULL if it failed.
 **/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int len = 0;

	if (head == NULL || str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));/*allocate memory for new var*/
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str); /*add input str to list_t*/
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (*str++) /*compute the length of str*/
		len++;

	new_node->len = len; /*add len variable*/
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

