#include "main.h"
#include <string.h>

/**
 * _strspn -  get length of a prefix substring.
 *@s: string to be scanned.
 *@accept: striing to compare with main string
 * Return: length of prefix substring
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
