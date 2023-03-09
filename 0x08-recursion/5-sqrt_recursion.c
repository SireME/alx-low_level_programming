#include "main.h"

int asqr(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calc its sqr.
 * Return: resulting sqr
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (asqr(n, 0));
}

/**
 * asqr - find natural sqr
 * @n: int to calculate sqr of.
 * @i: index iterator
 *
 * Return: square root
 */
int asqr(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (asqr(n, i + 1));
}
