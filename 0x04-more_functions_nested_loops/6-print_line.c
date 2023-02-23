#include "main.h"

/**
 * print_line - prints out a line of @n number of _ characters and a
 * newline to stdout
 * @n: deliniates the number of times _ should be printed.
 *
 * Return - null (function is void type)
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
