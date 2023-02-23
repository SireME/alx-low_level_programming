#include <ctype.h>
#include <stdio.h>
/**
 * print_numbers - function to print numbers
 * Description: function that prints numbers from 0 to 9
 * Return: nada
 **/

void print_numbers(void);

{
	int vl;

	for (vl = 0; vl < 10; vl++)
	{
		_putchar('0' + vl);
	}
	_putchar('\n')
}

