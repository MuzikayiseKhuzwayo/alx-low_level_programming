#include "main.h"

/**
 * print_to_98 - prints every number between @n and 98 in sequence
 * @n: The integer to add
 *
 * Return: null.
 */
int print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			if (n == 98)
			{
				_putchar(n + '0');
				_putchar('\n');
			}
			else
			{
				_putchar(n + '0');
				_putchar(',');
				_putchar(' ');
			}
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{

			if (n == 98)
			{
				_putchar(n + '0');
				_putchar('\n');
			}
			else
			{
				_putchar(n + '0');
				_putchar(',');
				_putchar(' ');
			}
			n--;
		}
	}
}
