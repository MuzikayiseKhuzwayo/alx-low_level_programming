#include "main.h"

/**
 * jack_bauer - prints all the minutes in a 24 hoir period
 *
 * Return: null.
 */
void jack_bauer(void)
{
	int i = 0;

	int j = 0;

	while (i <= 23)
	{
		j = 0;
		while (j <= 59)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + 48);
			_putchar(':');
			_putchar(j / 10 + 48);
			_putchar(j % 10 + 48);
			_putchar('\n');
			j++;
		}
		i++;
	}
}
