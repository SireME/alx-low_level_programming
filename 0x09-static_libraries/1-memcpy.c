#include "main.h"
#include <string.h>

/**
 * _memcpy -  fill memory with a constant byte.
 * of a string to uppercase.
 *@dest: source memory destination.
 *@src: source memory location.
 *@n: number of n bytes to be copied.
 * Return: destination pointer.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, sizeof(char) * n));
}
