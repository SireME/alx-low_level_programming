#include <stdio.h>
#include "main.h"

/**
 * print_diagsums -  print sum of cubic diagonals
 *@a: 2d array.
 *@size: size of cubic array.
 *Return: nada
 */

void print_diagsums(int (*a), int size)
{
	int i;

	unsigned int sd1, sd2;

	sd1 = 0;
	sd2 = 0;

	for (i = 0; i < size; i++)
	{
		sd1 += a[(size * i) + i];
		sd2 += a[(size * (i + 1)) - (i + 1)];
	}

	printf("%d, %d\n", sd1, sd2);
}
