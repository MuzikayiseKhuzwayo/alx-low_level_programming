#include "main.h"

/**
 * print_rev - takes in an array of pointers to chars and
 * returns the reversed version of that array
 * @s: pointer to the string of arrays
 *
 * Return: Nothing
 */

void print_rev(char *s)
{
	int len;

	len = 1;

	while (*s != '\0')
	{
		s++;
		len++;
	}

	while (len > 0)
	{
		_putchar(*s);
		s--;
		len--;
	}
	_putchar('\n');
}