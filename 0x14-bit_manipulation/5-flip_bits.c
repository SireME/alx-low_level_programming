/**
 * flip_bits - number of bits to flip from n to m
 * @n: first number
 * @m: second number
 *
 * Return: count of number of bits
 */
unsigned long int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask = m ^ n;
	unsigned long int num_bits = 0;

	while (mask > 0)
	{
		num_bits++;
		mask &= (mask - 1);
	}

	return (num_bits);
}

