#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _islower - check for lower case character
 * c - integer varaible to be checked
 * Description: program that checks for lower case character
 * Return: return 1 or 0
 **/

int _islower(int c)

{
	int vl;

	if (islower(c))
	{
	vl = 1;
	}
	else
	{
	vl = 0;
	}
	return (vl);
}


