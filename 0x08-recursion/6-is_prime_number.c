#include "main.h"

/**
* test_prime - use cases to find prime or composite
* @n: integer number
* @m: composite tester
*
*Return: an integer
*/

int test_prime(int n, int m)
{
	if (n % m == 0 && n != m)
	{
		return (0);
	}
	else if (n == m)
	{
		return (1);
	}
	return (test_prime(n, m + 1));
}

/**
* is_prime_number - recursively find if @n is a prime number
* @n: integer number
*
*Return: an integer value for the sqrt, -1 if it failed to find natural sqrt
*/

int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	else if (n > 2)
	{
		return (test_prime(n, 2));
	}
	return (0);
}

