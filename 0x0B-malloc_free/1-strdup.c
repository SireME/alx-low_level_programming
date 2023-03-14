#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup -  duplicate string and return as pointer.
 *@str: string to duplicate.
 * Return: pointer to str or NULL.
 */

char *_strdup(char *str)
{
	char *newstr;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	newstr = malloc(sizeof(char) * (len + 1));

	if (newstr == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		newstr[i] = str[i];

	newstr[len] = '\0';

	return (newstr);
}
