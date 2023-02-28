#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _atoi - convert string to int
 * @s: string to be converted
 * Description: function to convert str to int
 * Return: integer
 **/

int _atoi(char *s)
{
	int sign = 1, i = 0;
	unsigned int fl = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		fl = (fl * 10) + (s[i] - '0');
		i++;
	}
	fl *= sign;
	return (fl);
}
