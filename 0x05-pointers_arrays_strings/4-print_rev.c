#include <ctype.h>
#include <string.h>
/**
 * print_rev - print string in reverse
 * @s: string to be printed in reverse
 * Description: function takes in a string and prints in reverse
 * Return: nada
 **/

void void print_rev(char *s)
{
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
