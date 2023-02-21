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

	for (nm = '0'; nm <= '9'; nm++)
	{
		putchar(nm);
		if (nm != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar (*nl);

	return (0);
}

