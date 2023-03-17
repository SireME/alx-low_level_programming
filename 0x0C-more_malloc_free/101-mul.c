#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main -  multiply two number, no print statement.
 *@argc: number of argumnets.
 *@argv: arguments vector.
 * Return: nada.
 */

int main(int argc, char *argv[])

{
	unsigned long int vl;
	int i, k;

	if (argc != 3) /* ensure atleast or atmost 2 vectors passed*/
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < 3; i++) /* check if argument is digit using ascii*/
	{
		for (k = 0; argv[i][k]; k++)
		{
			if (argv[i][k] < '0' || argv[i][k] > '9')
			{
				printf("Error\n");
				exit(98);
			}
		}
	}

	vl = atoi(argv[1]) * atoi(argv[2]);
	printf("%lu\n", vl);
	return (0);
}
