#include "_putchar.c" /*include our putchar file for character printing*/
/**
 * main - main function to print the name of the file
 * it was compiled from
 *
 * Return: nothing
 **/

int main(void)
{
	char *s; /*define pointer to collect file name literal*/

	s = __FILE__; /*read constant macro to memory*/

	while (*s++) /* use pointer logic to print file name*/
		_putchar(*(s - 1));
	_putchar('\n');
	return (0);
}
