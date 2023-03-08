#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion -  initialise printing of string
 *@s: string to to be printed
 *@n: integer for index value.
 * Return: chararter or null
 */
void printchar(int n, char *s);

void _puts_recursion(char *s)
{
	printchar(0, s);
}

/**
 * printchar - print characters of string.
 *@n: integer for index value.
 *@s: string to be printed.
 * Return: chararter or null.
 */

void printchar(int n, char *s)
{
	if (s[n] == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(s[n]);
	printchar(n + 1, s);
}
