#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - print all inputs
 * @format: string of types
 *
 * Return: nothing(print delimited strings)
 */

void print_all(const char * const format, ...)
{
	int i;
	char *str;
	char *delimit;
	va_list ap;

	va_start(ap, format);
	i = 0;
	while (format && format[i])
	{
		delimit = "";
		if (format[i + 1])
			delimit = ", ";
		switch (format[i])
		{

		case 'c':
			printf("%c%s", va_arg(ap, int), delimit);
			break;
		case 'i':
			printf("%d%s", va_arg(ap, int), delimit);
			break;
		case 'f':
			printf("%f%s", va_arg(ap, double), delimit);
			break;
		case 's':
			str = va_arg(ap, char *);
			if (!str || !*str)
				str = "(nil)";
			printf("%s%s", str, delimit);
			break;
		}
		i++;
	}
	putchar('\n');
}
