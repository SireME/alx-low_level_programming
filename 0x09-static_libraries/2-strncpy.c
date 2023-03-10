#include "main.h"
#include <ctype.h>
#include <string.h>
/**
 * *_strncpy - copy string
 * @dest: string to be copied to
 * @src: string to copy from
 * @n: number of characters to be copied
 * Description: function that copies a string from source to destination
 * Return: nada
 **/

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
