#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
/**
 * main - ini function
 * Description: The entry into the script
 * Return:0
 **/


int main(void)
{
	char *nl = "\n";
	int ch;
	char b6 = '0';

	while (b6 <= '9')
	{
		putchar(b6);
		b6++;
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
	putchar(ch);
	}
	putchar (*nl);

	return (0);
}

