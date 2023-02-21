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

for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}

for (ch = 'A'; ch <= 'Z'; ch++)
{
putchar(ch);
}
putchar (*nl);

return (0);
}

