#include <stdio.h>
#include "main.h"

/**
 * rot13 -  function to encode string using rot13.
 * @s: An input string to encode using rot13
 * Return: Encoded string
 */
char *rot13(char *s)
{
	int i, j;

	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (alpha[j] != '\0')
		{
			if (s[i] == alpha[j])
			{
				s[i] = rot[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
