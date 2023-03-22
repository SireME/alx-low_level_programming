#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - function to add two numbers
 * @a: first number
 * @b: second number
 *
 * Return: sum of both number
 */

int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - get differeence between two number
 * @a: numb1
 * @b: numb2
 *
 * Return: difference between numbers
 */

int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiply two numbers
 * @a: numb1
 * @b: numb2
 *
 * Return: product of both number
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide two number
 * @a: numb1
 * @b: numb2
 *
 * Return: division results
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulo of two numbers
 * @a: numb1
 * @b: numb2
 *
 * Return: modulo result
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
