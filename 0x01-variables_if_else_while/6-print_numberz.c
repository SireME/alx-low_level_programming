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
	int nm;

	for (nm = 0; nm < 10; nm++)
	{
	putchar(nm + '0');
	}
	putchar (*nl);

	return (0);
}
