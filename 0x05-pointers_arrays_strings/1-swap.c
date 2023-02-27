#include "main.h"
#include <ctype.h>
/**
 * swap_int - function to swap two integers
 * @a: first int to swap
 * @b: Second integer to swap to
 * Description: this function swaps two integers
 * Return: nada
 **/

void swap_int(int *a, int *b)

{
	 int swap;

	 swap = *a;
	 *a   = *b;
	 *b   = swap;
}

