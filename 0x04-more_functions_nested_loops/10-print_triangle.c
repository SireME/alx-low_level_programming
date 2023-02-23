#include "main.h"

/**
 * print_triangle - print triangle of size n
 * @size: input for triangle size
 * Return: nada
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < size ; i++)
	{
		for (j = size - 1; j >= 0 ; j--)
		{
		if (j > i)
		{
			_putchar(' ');
		}
		else
		{
			_putchar('#');
		}
		}
		_putchar('\n');
	}
}
