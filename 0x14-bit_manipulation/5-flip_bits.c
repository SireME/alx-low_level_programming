#include "main.h"

/**
 * flip_bits - number of bits to flip from n to m
 * @n: first numb
 * @m: second numb
 *
 * Return: count of number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int mask = m ^ n;
	int num_bits = 0;

	while (mask > 0)
	{
		num_bits++;
		mask &= (mask - 1);
	}


	return (num_bits);
}
