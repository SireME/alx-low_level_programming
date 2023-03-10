#include "main.h"
#include <string.h>

/**
 * _strpbrk -  search for any set of bytes.
 *@s: string array to be searched.
 *@accept: string array to search from.
 * Return: matching string.
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
