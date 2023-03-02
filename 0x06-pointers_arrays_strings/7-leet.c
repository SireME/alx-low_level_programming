#include "main.h"

/**
 * leet -  function to encode string to 1337
 * of a string to uppercase.
 *@s: string to be endcoded
 * Return: s.
 */

char *leet(char *s)
{
	char l[] = "aAeEoOtTlT";
	char n[] = "4433007711";

	for (int i = 0; s[i] != '\0'; i++)
	{
		for (int f = 0; l[f] != '\0'; f++)
		{
			if (s[i] == l[f])
			{
				s[i] = n[f];
			}
		}
	}
	return (s);
}

