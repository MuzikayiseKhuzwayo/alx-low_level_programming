#include "main.h"
#include <math.h>

/**
 * print_number - prints an integer @n to stdout
 * @n: number being printed out
 *
 * Return: null (function is void type)
 */

void print_number(int n)
{
	unsigned int tmp;

	if (n < 0)
	{
		_putchar('-');
		tmp = n * -1;
	}
	else if (n >= 0)
	{
		tmp = n;
	}

	if (tmp / 10)
	{
		print_number(tmp / 10);
	}
	_putchar((tmp % 10) + 48);
}
