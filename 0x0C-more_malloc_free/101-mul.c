#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

void printe(void);
void printi(long value);

/**
 * main -  multiply two number, no print statement.
 *@argc: number of argumnets.
 *@argv: arguments vector.
 * Return: nada.
 */

int main(int argc, char *argv[])

{
	int vl, i, k;

	if (argc != 3) /* ensure atleast or atmost 2 vectors passed*/
	{
		printe();
		exit(98);
	}
	for (i = 1; i < 3; i++) /* check if argument is digit using ascii*/
	{
		for (k = 0; argv[i][k]; k++)
		{
			if (argv[i][k] < '0' || argv[i][k] > '9')
			{
				printe();
				exit(98);
			}
		}
	}

	vl = atoi(argv[1]) * atoi(argv[2]); /* compute multiplication*/
	printi(vl);
	putchar('\n');

	return (0);
}
/**
 * printe -  print error message followed by new line..
 */
void printe(void)
{
	char *e = "Error";
	int i;

	for (i = 0; e[i]; i++)
		putchar(e[i]);
	putchar('\n');
}
/**
 * printi -  print integer to standard output.
 * @value: integer value to be printed.
 */

void printi(long value)
{
	if (value != 0)
	{
		printi(value / 10);
		putchar((value % 10) + '0');
	}
}
