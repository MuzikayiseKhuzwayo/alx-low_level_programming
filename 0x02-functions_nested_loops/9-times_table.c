#include "main.h"

/**
 * times_table - prints the multiplicationntable from 0 to 9
 *
 * Return: null.
 */
void times_table(void)
{
	int i = 0;

	int j = 0;

	int tmp = 0;

	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			tmp = i * j;

			if (j == 0)
			{
				_putchar(tmp + '0');
			}
			else if (tmp < 10 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(tmp + '0');
			}
			else if (tmp >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((tmp / 10) + '0');
				_putchar((tmp % 10) + '0');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
