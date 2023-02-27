#include "main.h"

/**
 * puts_half - takes in an array of pointers to chars and
 * prints half of them to stdout using _putchar
 * @str: pointer to the string
 *
 * Return: Nothing
 */

void puts_half(char *str)
{
	int len, i, n;

	len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}

	n = 0;

	if (len % 2)
	{
		n = 1;
	}

	for (i = 0; i < len; i++)
	{
		str--;
	}

	for (i = len - ((len - n) / 2); i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
