#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - print linked list content
 * @h: head to linked list
 *
 * Return: Number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t n_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		n_nodes += 1;
		h = h->next;
	}

	return (n_nodes);
}

