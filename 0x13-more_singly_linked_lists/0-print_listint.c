#include "lists.h"
#include <stdio.h>
/**
 * print_listint - print all elements of listint_t
 * @h: list to print
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *current;
	size_t counter = 0;

	current = h;
	while (current != NULL) /*traverse list , printing and counting elements*/
	{
		printf("%d\n", current->n);
		counter += 1;
		current = current->next;
	}

	return (counter);
}
