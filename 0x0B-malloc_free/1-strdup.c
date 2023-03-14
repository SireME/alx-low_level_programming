#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup -  duplicate string and return as pointer.
 *@str: string to duplicate.
 * Return: pointer to str or NULL.
 */

char *_strdup(char *str)
{
	int i, j, len = 0;
	char *newstr;

	if (str == NULL)
	{
		return (NULL);
	}

	for (j = 0; str[j]; j++)
		len++;

	newstr = malloc(sizeof(char) * (len + 1));
	if (newstr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len + 2; i++)
	{
		newstr[i] = str[i];
	}
	return (newstr);
}
