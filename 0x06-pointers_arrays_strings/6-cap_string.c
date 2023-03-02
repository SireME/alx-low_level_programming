#include "main.h"

/**
 * cap_string -  function that changes all lowercase first letters to uppercase
 * of a string to uppercase.
 *@s: string variable
 * Return: s.
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0 ; s[i] != '\0'; i++)
	{
		if ((s[i - 1] == ' ' || s[i - 1] == '\n'
		|| s[i - 1] == '\t' || s[i - 1] == ','
		|| s[i - 1] == ';' || s[i - 1] == '!'
		|| s[i - 1] == '?' || s[i - 1] == '"'
		|| s[i - 1] == '(' || s[i - 1] == ')'
		|| s[i - 1] == '{' || s[i - 1] == '}'
		|| s[i - 1] == '.')
		&& (s[i] >= 'a' && s[i] <= 'z'))
		{
			s[i] = s[i] - 32;
		}
		else if ((s[0] >= 97 && s[0] <= 122))
		{
			s[0] = s[0] - 32;
		}
		else
		{
			s[i] = s[i];
		}
	}
	return (s);
}
