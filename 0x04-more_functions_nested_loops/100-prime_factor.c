#include <stdio.h>

/**
 * main - entry function prime numbers
 *Description: computes largest prime number
 * Return: 0
 */

int main(void)
{
	long numb = 612852475143;
	long divisor = 2;
	long large_prim = 0;

	while (numb != 1)
	{
		if (numb % divisor == 0)
		{
			numb = numb / divisor;
			large_prim = divisor;
		}
		else
		{
		divisor += 1;
		}
	}
	printf("%ld\n", large_prim);
	return (0);
}
