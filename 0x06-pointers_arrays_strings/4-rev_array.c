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
	int i;
	int b;

	for (i = 0;i < n; i++)
	{
		n--;
		b = a[i];
		a[i] = a[n];
		a[n] = b;
	}
}
