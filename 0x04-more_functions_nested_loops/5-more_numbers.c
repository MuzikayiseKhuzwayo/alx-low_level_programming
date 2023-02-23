#include "main.h"

/**
 * more_numbers - prints out 0 through 14 followed by newline 10x to stdout
 *
 * Return - null (function is void type)
 */

void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar(1 + 48);
			}
			_putchar((i % 10) + 48); 
		}
		_putchar('\n');
	}
}
