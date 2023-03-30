#include "lists.h"
#include <unistd.h>

/**
 * _putchar - print a character to standard output
 *@c: charcter to print
 *
 * Return: count
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

