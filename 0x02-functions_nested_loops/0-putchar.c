#include <stdio.h>
/**
*main - Entry into file
*Description: function prints _putcahr
*Return: returns nada
*/

int main(void)
{
char vl[] = "_putchar";
int nb;
int vllength = (sizeof(vl) / sizeof(vl[0])) - 2;

for (nb = 0 ; nb <= vllength ; nb++)
{
putchar(vl[nb]);
}
putchar('\n');
return (0);
}
