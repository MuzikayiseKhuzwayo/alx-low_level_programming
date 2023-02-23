#include "main.h"

/**
 * print_diagonal - prints out a line of @n number of \ characters and a
 * newline to stdout
 * @n: deliniates the number of times \ should be printed.
 *
 * Return - null (function is void type)
 */

void print_diagonal(int n)
{
	int i, j;

	j = 0;

	do {
		i = 0;

		for (i = 0; i < j; i++)
		{
			if (i != n - 1)
			{
				_putchar(' ');
			}
		}
		if ((i >= 0) && (n > 0))
		{
			_putchar('\\');
		}
		_putchar('\n');
		j++;
	} while (j < n);
}
