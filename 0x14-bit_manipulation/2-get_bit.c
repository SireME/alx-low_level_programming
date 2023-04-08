#include "main.h"

/**
 * get_bit - return value of a bit at given index
 * @n: unsigned integer
 * @index: index to to return bit
 *
 * Return: bit or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int m = n;
	unsigned int len = 0;

	while (m > 0u)/*compute length of binary number*/
	{
		m >>= 1;
		len++;
	}

	if (index >= len)/*terminate if index is greater than or len*/
		return (-1);

	return ((n >> index) & 1); /*return value at index*/
}
