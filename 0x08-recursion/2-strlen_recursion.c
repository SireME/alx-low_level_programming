#include "main.h"
#include <stdio.h>

/**
 *_strlen_recursion - initial input and length calc from lstr func.
 *@s: string to calculate length.
 *Return: string length.
 */

int _strlen_recursion(char *s)
{
	int string_length;

	string_length = lstr(0, s);
	return (string_length);
}

/**
 * lstr - calculate lennth of string using recursion.
 *@n: integer for index and length storage.
 *@s: string to calculate length.
 * Return: integer bearing string length.
 */

int lstr(int n, char *s)
{
	if (s[n] != '\0')
	{
		return (lstr(n + 1, s));
	}
	else
	{
		return (n);
	}
}
