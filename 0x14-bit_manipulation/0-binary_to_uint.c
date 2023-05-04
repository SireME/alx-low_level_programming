#include "main.h"

/**
 * binary_to_uint - convert binary number to an unsigned integer
 * @b: binary number to convert
 *
 * Return: binary number conversion or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int conv = 0, len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
		;

	while (*b) /*perform conversion using bitwise logic or exit*/
	{
		if ((*b != '0') && (*b != '1'))
			return (0);

		conv += (*b - 48) << (len - 1);
		len--;
		b++;
	}

	return (conv);
}
