#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isalpha - check for alpabetic character character
 * @c: varaible to be checked
 * Description: program that checks for alpabetic character
 * Return: return 1 or 0
 **/

int _isalpha(int c)

{
	int vl;

	if (isalpha(c) || islower(c) || isupper(c))
	{
	vl = 1;
	}
	else
	{
	vl = 0;
	}
	return (vl);
}

