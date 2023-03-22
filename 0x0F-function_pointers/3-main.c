#include "3-calc.h"
/**
 * main - main function to take input and calculate simple math
 * @argc: length of vector
 * @argv: vector input
 *
 * Return: Nothing
 */

#include <stdlib.h>
#include <stdio.h>


int main(int argc, char *argv[])
{
	int vl;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	vl = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));

	printf("%d\n", vl);

	return (0);
}
