#include "main.h"
/**
* print_rev_recursion - recursively prints the
* reverse of a string
* @s: pointer to a string
*
*Return: Nothing
*/

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
