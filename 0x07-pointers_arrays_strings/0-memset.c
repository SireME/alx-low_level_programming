#include "main.h"
#include <string.h>

/**
 * _memset -  fill memory with a constant byte.
 * of a string to uppercase.
 *@s: string variable.
 *@b: constant value to fill memory location.
 *@n: number of n bytes to be filled with b.
 * Return: pointer to memory area.
 */

char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, sizeof(char) * n));
}
