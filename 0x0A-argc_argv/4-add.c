#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main -  main function that sums all positive numbers.
 *@argc: size of input array.
 *@argv: array of input parameters.
 * Return: nada.
 */

int main(int argc, char *argv[])
{
	int i, k, sum;

	for (i = 1; i < argc; i++)
	{
		for (k = 0; argv[i][k]; k++)
		{
			if (argv[i][k] < '0' || argv[i][k] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
