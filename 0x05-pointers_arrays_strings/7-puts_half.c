#include "main.h"
#include <ctype.h>
#include <string.h>
/**
 * puts_half - print half of str
 * @str: string to be printed in reverse
 * Description: function takes in a string and prints half of it
 * if  numbers odd function prints last n
 * Return: nada
 **/

void puts_half(char *str)
{
	int i, len;

	len = strlen(str);
	if (len % 2 != 0)
	{
		len = len / 2 + 1;
	}
	else
	{
		len /= 2;
	}

	for (i = len; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}

