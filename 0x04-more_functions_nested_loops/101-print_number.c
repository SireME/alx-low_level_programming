#include "main.h"
/**
 * print_number - prints numbers
 * @n: number to be printed
 * Return:void
 */

void print_number(int n)
{
	unsigned int vl;

	vl = n;
	if (n < 0)
	{
		_putchar('-');
		vl = -n;
	}
	if (vl / 10)
		print_number(vl / 10);
	_putchar((vl % 10) + '0');
}
