#include "main.h"

/**
 * print_alphabet - prints out alphabets from a-z to stdout
 *
 * Return: On success null.
 */
void print_alphabet(void)
{
	int i = 97;

	while (i <= 122)
	{
		_putchar(i);
		if (i == 122)
		{
			_putchar('\n');
		}
		i++;
	}
}
