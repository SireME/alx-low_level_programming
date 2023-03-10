#include "main.h"
#include <stdio.h>

/**
 * main -  main function to return arguments passed to it.
 *@argc: size of input array.
 *@argv: array of input parameters
 * Return: nada
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
