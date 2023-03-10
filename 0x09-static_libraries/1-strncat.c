#include "main.h"
#include <ctype.h>
#include <string.h>
/**
 * *_strncat - concatenate strings
 * @dest: string to be concatenated to
 * @src: second string to concatenate from
 * @n: integer for number of bytes
 * Description: function that concatenates a string to another.
 * Return: nada
 **/

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}

