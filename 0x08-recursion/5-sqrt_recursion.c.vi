#include "main.h"
#include <stdio.h>

/**
 *_pow_recursion - calculate x raise to y.
 *@x: base valuce.
 *@y: values x is raised to.
 *Return: int of ans.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y != 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (1);
	}
}
