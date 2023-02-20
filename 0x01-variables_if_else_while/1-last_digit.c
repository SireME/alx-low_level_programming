#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - main function
 * Description: The entry into the script
 * Return:0
 **/

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int lastv = abs(n % 10);

	if (lastv > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, lastv);
	}
	else if (lastv == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, lastv);
	}
	else if ((lastv < 6) && (lastv != 0))
	{
	printf("Last digit of %d is %d and is less than 6 and not zero\n", n, lastv);
	}

	return (0);
}

