#include "main.h"

/**
 * print_numbers - prints out 0 through 9 followed by newline to stdout
 *
 * Return - null (function is void type)
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
		if (i == 57)
		{
			_putchar('\n');
		}
	}
}
