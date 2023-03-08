#include "main.h"
#include <string.h>
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
	/*if (len == 0)
		_putchar('\n');*/
}
