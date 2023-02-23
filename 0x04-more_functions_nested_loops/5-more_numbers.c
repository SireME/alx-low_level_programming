#include <ctype.h>
#include "main.h"
#include <stdio.h>
/**
 * more_numbers - function to print numbers
 * Description: function that prints numbers from 0 to 14 10 times
 * Return: nada
 **/

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
				_putchar((vl / 10) + '0');
				_putchar((vl % 10) + '0');
			}
		}
		_putchar('\n');
	}
}

