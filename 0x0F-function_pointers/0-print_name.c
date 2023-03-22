#include "function_pointers.h"

/**
 * print_name - print name with function pointers
 * presence
 * @name: name to be printed
 * @f: pointer function
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL) f(name);
}
