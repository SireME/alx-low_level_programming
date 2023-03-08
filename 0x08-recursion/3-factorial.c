#include "main.h"
#include <stdio.h>

/**
 *factorial - calculate factorial of an int.
 *@n: integer to calc.
 *Return: string length.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
