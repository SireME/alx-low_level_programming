#include <stdio.h>
#include <stdlib.h>

/**
 * main - function to print opcode of main function
 * @argc: length of finput
 * @argv: input vector
 *
 * Return: nothing
 */

int main(int argc, char *argv[])
{
	int n_bytes;

	n_bytes = 0;
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (n_bytes < atoi(argv[1]))
	{
		printf("%02x", *((unsigned char *)main + n_bytes));
		n_bytes++;
		if (atoi(argv[1]) > n_bytes)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
