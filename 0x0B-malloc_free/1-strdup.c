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
	int i, len = strlen(str);
	char *newstr;

	if (str == NULL)
	{
		return (NULL);
	}

	newstr = malloc(sizeof(char) * len - 1);
	if (newstr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len + 1; i++)
	{
		newstr[i] = str[i];
	}
	return (newstr);
}
