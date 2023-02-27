#include "main.h"
#include <ctype.h>
#include <string.h>
/**
 * rev_string - print string in reverse
 * @s: string to be printed in reverse
 * Description: function takes in a string and prints in reverse
 * Return: nada
 **/

void rev_string(char *s)

{
	int j, i;

	i = strlen(s);

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}

}
