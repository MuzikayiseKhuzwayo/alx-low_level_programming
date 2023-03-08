#include "main.h"

/**
* wildcmp - recursively find if @s1 and @s2 are identical
* * char is a wildcard char
* @s1: string one
* @s2: string two
*
*Return: 1 if @s1 and @s2 are the same, 0 if not
*/

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	else if (*s1 == '\0' && *s2 == '*')
	{
		return (wildcmp(s1, ++s2));
	}
	else if (*s1 != '\0' && *s2 == '*')
	{
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(++s1, ++s2));
	}
	return (0);
}
