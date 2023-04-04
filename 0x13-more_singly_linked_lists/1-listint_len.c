#include "lists.h"
/**
 * listint_len -return number of  elements of listint_t list
 * @h: list to return
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *current;
	size_t counter = 0;

	current = h;
	while (current != NULL) /*traverse list, counting elements*/
	{
		counter += 1;
		current = current->next;
	}

	return (counter);
}
