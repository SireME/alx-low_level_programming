#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_last_digit - print last digit
 * @n: value to be computed
 * Description: prints last digit of a number
 * Return: integer
 **/

int print_last_digit(int n)

{
	int vl;

	vl = abs(n % 10);
	_putchar('0' + vl);
	return (vl);
}
