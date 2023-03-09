#include <string.h>
#include "main.h"

int checkp(char *s, int i, int len);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 * Return: 1 if pal, 0 if not p
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (checkp(s, 0, strlen(s)));
}

/**
 * checkp - checks the characters recursively for palindrome
 * @s: string to check
 * @i: iterator type
 * @len: length of the string
 * Return: 1 if palindrome, 0 if not
 */
int checkp(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (checkp(s, i + 1, len - 1));
}
