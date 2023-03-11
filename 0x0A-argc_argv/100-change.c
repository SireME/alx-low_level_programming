#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main -  main function that prints minimum number 
 * of coins to make change
 *@argc: size of input array.
 *@argv: array of input parameters.
 * Return: nada.
 */

int main(int argc, char *argv[])
{
	int  change, cents = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (cents < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	if (cents % 25 >= 0)
	{
		change = cents / 25;
		cents = cents % 25;
	}
	if (cents % 10 >= 0)
	{
		change += cents / 10;
		cents = cents % 10;
	}
	if (cents % 5 >= 0)
	{
		change += cents / 5;
		cents = cents % 5;
	}
	if (cents % 2 >= 0)
	{
		change += cents / 2;
		cents = cents % 2;
	}
	if (cents % 1 >= 0)
	{
		change += cents / 1;
	}
	printf("%d\n", change);
	return (0);
}
