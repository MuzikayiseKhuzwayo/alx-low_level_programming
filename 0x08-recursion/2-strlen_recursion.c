#include "main.h"

/**
* _strlen_recursion - recursively finds the length
* of string @s
* @s: pointer to a string
*
*Return: an integer delineating length of string
*/

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(++s));
	}
	return (0);
}
