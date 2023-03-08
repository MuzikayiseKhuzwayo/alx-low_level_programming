#include "main.h"

/**
* factorial - recursively find the factorial of @n
* @n: integer number
*
*Return: an integer delineating the factorial of @n
*/

int factorial(int n)
{
	if (n > 1)
	{
		return (n * factorial(n - 1));
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (1);
}
