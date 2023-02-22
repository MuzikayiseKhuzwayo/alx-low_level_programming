#include "main.h"

/**
 * print_alphabet_x10 - prints out alphabets from a-z to stdout ten times
 *
 * Return: On success: null.
 */
void print_alphabet_x10(void)
{
	int i = 97;
	
	int j = 0;

	while (j < 10)
	{
		i = 97;

		while (i <= 122)
		{
			_putchar(i);
			if (i == 122)
			{
				_putchar('\n');
			}
			i++;
		}
	j++;	
	}
}
