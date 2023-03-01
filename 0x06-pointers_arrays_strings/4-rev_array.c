#include "main.h"
#include <ctype.h>
#include <string.h>
/**
 * reverse_array - print strings in reverse
 * @a: integer array to be reversed
 * @n: number of integer elements
 * Description: function that reverses an array of inits
 * Return: nada
 **/

void reverse_array(int *a, int n)
{
	int tmp[n - 1], i, j;

	for (i = 0; i < n; i++)
	{
		tmp[i] = a[n - 1 - i];
	}
	for (j = 0; j < n; j++)
	{
		a[j] = tmp[j];
	}
}
