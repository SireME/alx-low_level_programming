#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum all input parameters
 * @n: number of input parameters
 *
 * Return: sum of all input parameters or 0 if n = 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list ap;

	if (!n)
		return (0);

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
