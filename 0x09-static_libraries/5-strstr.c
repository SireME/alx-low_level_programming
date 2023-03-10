#include "main.h"
#include <string.h>

/**
 * _strstr -  locate substring .
 *@haystack: string to scan through for substring.
 *@needle: substring to search from haystack.
 * Return: pointer to the start of substring.
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
