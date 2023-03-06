#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * print_chessboard -  print cheeseboard.
 *@a: string 2d array to print.
 * nada
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			putchar(a[i][j]);
		}
		putchar('\n');
	}
}
