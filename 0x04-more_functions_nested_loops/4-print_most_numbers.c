#include <ctype.h>
#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - function to print numbers from 0 to 9
 * Description: function that prints numbers from 0 to 9 excluding 4 and 2
 * Return: nada
 **/

void print_most_numbers(void)

{
	int vl;

	for (vl = 0; vl < 10; vl++)
	{
		if (vl == 2 || vl == 4)
		{
			continue;
		}
		_putchar('0' + vl);
	}
	_putchar('\n');
}

