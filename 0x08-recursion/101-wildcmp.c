#include "main.h"
/**
 * wildcmp - compares two strings and returns 1 or 0
 * based on how identical they are considered 1 iden 0 not
 * @s1: the normal string
 * @s2: striing with variation, can contain '*'
 * Return: 1 if identical or 0 if otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0' && *s1 == '\0')
		return (1);

	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
		return (0);

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));

	return (0);
}
