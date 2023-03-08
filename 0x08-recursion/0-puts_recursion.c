#include "main.h"

/**
* _puts_recursion - recursively prints a string and a new line
* @s: pointer to a string
*
*Return: Nothing
*/

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}
