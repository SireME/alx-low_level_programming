#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion -  initialise printing of string
 *@s: string to to be printed
 *@n: integer for index value.
 * Return: chararter or null
 */
void printcharr(int n, char *s);
int lstr(int n, char *s);

void _print_rev_recursion(char *s)
{
	int string_length;

	string_length = lstr(0, s);
	printcharr(string_length - 1, s);
}

/**
 * printcharr - print characters of string in reverse.
 *@n: integer for index value.
 *@s: string to be printed.
 * Return: chararter or null.
 */

void printcharr(int n, char *s)
{
	if (s[n] == '\0')
	{
		return;
	}
	putchar(s[n]);
	printcharr(n - 1, s);
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
