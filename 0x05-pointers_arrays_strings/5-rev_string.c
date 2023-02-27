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
	int i, len = strlen(s), j = 0;
	char tmp;

	for (i = len - 1; i >= len / 2; i--)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		j++;
	}
}
