#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * *_strcpy - copy src string to dest buffer
 * @src: source string
 * @dest: buffer to receive copied string
 * Description: function to copy string from
 * one address to another with its '\0'
 * Return: nada
 **/

char *_strcpy(char *dest, char *src)
{
	return (strcpy(dest, src));
}
