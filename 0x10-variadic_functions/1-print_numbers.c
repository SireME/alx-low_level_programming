#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - print all input numbers followed by separator
 * @separator: string between numbers
 * @n: number of input parameters
 *
 * Return: nothing(prints delimited numbers)
 */

void print_numbers(const char *separator, const unsigned int n, ...)

{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));

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
