#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to our pointer .
 * @to: string to set
 * Return: nada
 */
void set_string(char **s, char *to)
{
	*s = to;
}
