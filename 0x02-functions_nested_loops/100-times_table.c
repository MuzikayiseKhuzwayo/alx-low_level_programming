#include "main.h"

/**
 * print_times_table - prints the multiplicationntable from 0 to n
 * @n: the variable thatbstores the size of the tablen
 *
 * Return: null.
 */
void print_times_table(int n)
{
	int i, j, tmp = 0;

	if (n >= 0 && n <= 15)
	while (i <= n)
	{
		j = 0;
		while (j <= n)
		{
			tmp = i * j;
			if (j == 0)
				_putchar(tmp + '0');
			else if (tmp < 10 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(tmp + '0');
			}
			else if (tmp >= 10 && tmp <= 99)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((tmp / 10) + '0');
				_putchar((tmp % 10) + '0');
			}
			else if (tmp >= 100 && tmp <= 1000)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((tmp / 100) + '0');
				_putchar(((tmp % 100) / 10) + '0');
				_putchar((tmp % 10) + '0');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
