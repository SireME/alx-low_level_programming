#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * print_alphabet - rpint alphabets
 * Description: Prints our alphabets from a to z in lower case
 * Return: returnns nothing
 **/

void print_alphabet(void)
{
	char *nl = "\n";
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	putchar(ch);
	}
	putchar (*nl);
}

