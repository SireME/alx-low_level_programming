#include "main.h"
#include <ctype.h>
#include <string.h>
/**
 * puts2 - print every other character of a str
 * @str: string to be printed
 * Description: function takes in a string and prints half every aspect of it
 * Return: nada
 **/

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}

	_putchar('\n');
}
