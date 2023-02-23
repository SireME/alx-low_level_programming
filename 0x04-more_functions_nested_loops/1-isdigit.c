#include "main.h"
#include <ctype.h>
/**
 * _isdigit - check if value is a digit
 * @c: value to be checked
 * Description: function that checks if a caharcter is a digit returning 1  0r 0
 * Return: binary 1 or 0
 **/

int _isdigit(int c)

{
	int vl;

	if (isdigit(c))
	{
		vl = 1;
	}
	else
	{
		vl = 0;
	}
	return (vl);
}

