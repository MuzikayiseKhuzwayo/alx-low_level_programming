#include "main.h"

/**
 * print_most_numbers - prints out 0 through 9 but skips 2 and 4
 * followed by newline to stdout
 *
 * Return: null (function is void type)
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if ((i != 50) || (i != 52))
		{
			_putchar(i);
			if (i == 57)
			{
				_putchar('\n');
			}
		}
	}
}
