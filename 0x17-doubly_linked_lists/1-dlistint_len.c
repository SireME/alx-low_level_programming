#include "lists.h"

/**
 * dlistint_len - return number of elements in list
 * @h: head to linked list
 *
 * Return: Number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t n_elements = 0;

	while (h != NULL)
	{
		n_elements += 1;
		h = h->next;
	}

	return (n_elements);
}
