#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat -  concatenate string.
 *@s1: first string to concatenate.
 *@s2: second string for concatenation.
 * Return: pointer to str or NULL.
 */

char *str_concat(char *s1, char *s2)
{
	int i, len, instr = 0;
	char *conc;

	/**treating null values as empty**/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/**computing the length of both strings**/
	for (i = 0; s1[i]; i++)
		len++;
	for (i = 0; s2[i]; i++)
                len++;

	conc = malloc(sizeof(char) * (len + 1));
	if (conc == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i]; i++)
		conc[instr++] = s1[i];

	for (i = 0; s2[i]; i++)
		conc[instr++] = s2[i];

	return (conc);
}
