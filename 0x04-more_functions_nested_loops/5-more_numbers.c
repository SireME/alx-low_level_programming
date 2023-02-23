#include <ctype.h>
#include "main.h"
#include <stdio.h>
/**
 * more_numbers - function to print numbers
 * @value: input of value function
 * Description: function that prints numbers from 0 to 14 10 times
 * Return: nada
 **/

void print_long(long value);
void more_numbers(void)

{
	int externl;

	for (externl = 0; externl < 10; externl++)
	{
		int vl;

		for (vl = 0; vl < 15; vl++)
		{
			if (vl < 10)
			{
				_putchar('0' + vl);
			}
			if (vl > 9)
			{
				print_long(vl);
			}
		}
		_putchar('\n');
	}
}

/**
 * print_long - function to to return long integer with putchar
 * @value: intake of integer
 * Description: This funcion when given an integer, it is returned
 * Return: nada
 **/

void print_long(long value)
{
	if (value != 0)
	{
		print_long(value / 10);
		_putchar((value % 10) + '0');
	}
}
