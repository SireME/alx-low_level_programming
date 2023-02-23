#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * print_line - code to draw a line using number specifiers
 * @n: number of line to be printed
 * Description: the following function draws a line from input
 * Return: nada
 **/

void print_line(int n)

{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int vl;

		for (vl = 1; vl <= n; vl++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}

