#include "main.h"

int iprime(int n, int i);

/**
 * is_prime_number - outputs prime state
 * @n: number to evaluate
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (iprime(n, n - 1));
}

/**
 * iprime - evaluate if number is prime recursively
 * @n: num to eval
 * @i: iterator val
 * Return: 1 if n is prime, 0 if not
 */
int iprime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (iprime(n, i - 1));
}
