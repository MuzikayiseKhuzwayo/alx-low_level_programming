#include "main.h"

/**
 * print_sign - checks if a given int n is positive, negative or 0
 * outputs + or - or 0 depending on values
 * @n - integer being checked out
 *
 * Return: On positive n, return 1. 
 * On n equals 0, return 0.
 * On negative n, return -1.
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('+');
		return (1);
	}
}
