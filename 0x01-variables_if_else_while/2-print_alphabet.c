#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - ini function
 * Description: The entry into the script
 * Return:0
 **/


int main(void)
{
	char *nl = "\n";
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	putchar(ch);
	}
	putchar (*nl);
}

