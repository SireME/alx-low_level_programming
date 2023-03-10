#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main -  main function multiply two numbers.
 *@argc: size of input array.
 *@argv: array of input parameters.
 * Return: nada.
 */

int main(int argc, char *argv[])
{
	int mult;
	int len = argc - 1;

	if (len >= 3 || len < 2)
	{
		printf("Error\n");
	}
	else
	{
		mult = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mult);
	}
	return (0);
}
