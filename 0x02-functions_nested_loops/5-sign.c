#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_sign - print sign
 * @n: varaible to be checked
 * Description: program that prints signs
 * Return: return 1 or 0
 **/

int print_sign(int n)

{
	int vl;

	if (n > 0)
	{
	char vls[] = "+, ";
	int x;

	for (x = 0; x < 3; x++)
	{
		_putchar(vls[x]);
	}
	vl = 1;
	}
	else if (n == 0)
	{
	char vls[] = "0, ";
	int x;

	for (x = 0; x < 3; x++)
	{
		_putchar(vls[x]);
	}
	vl = 0;
	}
	else if (n < 0)
	{
	char vls[] = "-1, ";
	int x;

	for (x = 0; x < 3; x++)
	{
		_putchar(vls[x]);
	}
	vl = -1;
	}
	return (vl);
}

