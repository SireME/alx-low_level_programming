#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int mstrlen(char *s);
/**
 * string_nconcat -  concatenate s1 with first nbytes s2.
 *@s1: first string to concatenate.
 *@s2: string to concatenate with bytes s2.
 *@n: number of characters to concatenate up to.
 * Return: concatenated string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)

{
	char *newstr;
	int i, j, n2 = n;
	int len1 = mstrlen(s1), len2 = mstrlen(s2);

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (n2 >= len2)
		n2 = len2;

	newstr = malloc(sizeof(*newstr) * (len1 + n2 + 1));
	if (newstr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		newstr[i] = s1[i];

	for (j = 0; j < n2; j++)
		newstr[i + j] = s2[j];

	newstr[i + j] = '\0';
	return (newstr);
}

/**
 * mstrlen -  calculate length of string.
 *@s: string to calculate length.
 * Return: string length.
 */

int mstrlen(char *s)
{
	int len = 0;

	while(*s++)
		len++;
	return (len);
}