#include "main.h"
#include <ctype.h>
/**
 * _isupper - check uppercase character
 * @c: value to be checked
 * Description: function that checks for uper case character returning 1  0r 0
 * Return: binary 1 or 0
 **/

int _isupper(int c)

{
	int vl;

	if (isupper(c))
	{
		vl = 1;
	}
	else
	{
		vl = 0;
	}
	return (vl);
}

