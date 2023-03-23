#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all it's given params
 * @n: number of arguments
 * @...: variable number of integer input
 *
 * Return: sum of numbers if n > 0, or 0 if n is 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list args;

	if (n == 0)
	{
		return (0);
	}

	sum = 0;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
