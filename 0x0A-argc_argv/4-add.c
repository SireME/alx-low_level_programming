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
	int i;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{

		if (isdigit(*argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else if (!isdigit(*argv[i]))
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
