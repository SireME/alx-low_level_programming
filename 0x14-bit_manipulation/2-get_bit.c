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
	int len = 0, i;
	unsigned int internal_in = 0;

	while (n > 0)/*length of integer*/
	{
		n >>= 1;
		len++;
	}

	for (i = len - 1; i >= 0; i--)/*navigate through binary int*/
	{
		if ((m >> i) & 1)/*use bitwise logic to get bits in order*/
		{
			if (index == 0)
				return (1);

			if (internal_in == index - 1)
				return (1);
		}
		else
		{
			if (index == 0)
				return (0);

			if (internal_in == index - 1)
				return (0);
		}

		internal_in++;
	}
	return (-1);
}
