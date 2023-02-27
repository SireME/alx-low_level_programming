#include "main.h"
#include <ctype.h>
#include <string.h>
/**
 * _puts - prints a string
 * @str: string to be printed
 * Description: function takes in a string and prints it to visible output
 * Return: nada
 **/

void _puts(char *str)

{
	int j;

	for (j = 0; j < strlen(str); j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
