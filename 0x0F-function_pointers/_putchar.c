#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: The character to be  printed
 * Return: character
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
