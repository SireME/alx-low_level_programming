#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print strings delimited by any character
 * @separator: seperator for strings
 * @n: number of characters
 *
 * Return: nothing(print delimited strings)
 */

void print_strings(const char *separator, const unsigned int n, ...)

{
	unsigned int i;
	va_list ap;
	char *str;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		printf("%s", str == NULL ? "(nil)" : str);

		if (separator == NULL)
			continue;
		else
		{
			if (i == n - 1)
				break;
			printf("%s", separator);
		}
	}
	va_end(ap);
	putchar('\n');
}
