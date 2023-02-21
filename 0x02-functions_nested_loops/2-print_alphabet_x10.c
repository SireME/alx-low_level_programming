#include "main.h"

/**
 * print_alphabet_x10 - print alphabets 10x alphabets
 * Description: Print alphabet 10 times followed with newlines
 * Return: returnns nothing
 **/

void print_alphabet_x10(void)

{
	int vl;

	for (vl = 0; vl < 10; vl++)
	{
	char *nl = "\n";
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	_putchar(ch);
	}
	_putchar (*nl);
	}
}

