#include "main.h"

/**
 * set_bit - flip bit at index position
 * @n: integer to flip bit
 * @index: index to change at position
 *
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)/* check if index out of range*/
		return (-1);

	*n = *n | (1UL << index); /* switch bit at position */

	return (1);
}
