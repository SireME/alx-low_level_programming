#include "main.h"

/**
 * print_binary - print binary representation of a number
 * @n: number to print representation
 *
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int m = n;
	int len = 0, i;

	if (!n)
	{
		_putchar(0 + 48);
		return;
	}

	while (n > 0)
	{
		n >>= 1;
		len++;
	}

	for (i = len - 1; i >= 0; i--)
		if ((m >> i) & 1)
			_putchar(1 + '0');
		else
			_putchar(0 + '0');
}
