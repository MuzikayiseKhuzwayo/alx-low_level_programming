#include "main.h"

/**
* test_root - tests the root
* @n: is the int being tested
* @m: is the place it cannot go to, test case
*
* Return: int
*/

int test_root(int n, int m)
{
	if (m * m > n)
	{
		return (-1);
	}
	else if (m * m == n)
	{
		return (m);
	}
	return (test_root(n, m + 1));
}

/**
* _sqrt_recursion - recursively find the value the sqrt using helper
* @n: integer number
*
*Return: an integer value for the sqrt, -1 if it failed to find natural sqrt
*/

int _sqrt_recursion(int n)
{
	if (n > 0)
	{
		return (test_root(n, 1));
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (0);
}
