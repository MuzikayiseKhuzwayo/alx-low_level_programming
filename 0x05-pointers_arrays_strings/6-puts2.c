#include "main.h"

/**
 * puts2 - takes in an array of pointers to chars and
 * prints every second char to stdout using _putchar
 * @str: pointer to the string
 *
 * Return: Nothing
 */

void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		if (*str == '\0')
		{
			break;
		}
		str++;
	}
	_putchar('\n');
}
