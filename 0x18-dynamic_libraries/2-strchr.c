#include "main.h"
#include <string.h>

/**
 * _strchr -  return character in a string.
 *@s: string to search.
 *@c: charcter to search in string.
 * Return: chararter or null
 */

char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
