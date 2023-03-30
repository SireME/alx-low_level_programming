#include <stdio.h>

void my_function(void) __attribute__ ((constructor));
/**
 * my_function - print statement before main function
 *
 * Return: nothing because it is void
 */

void my_function(void)
{
	printf("You're beat! and yet, you must a");
	printf("llow,\nI bore my house upon my back!\n");
}
