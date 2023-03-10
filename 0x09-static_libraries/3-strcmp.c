#include "main.h"

/**
 * _strcmp - compare two strings s1 and s2
 * return less than, greater than or 0 depending on chars in s1 and s2
 * @s1: string bein compared
 * @s2: string being compared
 *
 * Return: integer value
 */

int _strcmp(char *s1, char *s2)
{
	while ((*s1 == *s2) && (*s1 != '\0') && (*s2 != 0))
	{
		s1++;
		s2++;
	}

	if (*s1 == *s2)
	{
		return (0);
	}
	return (*s1 - *s2);
}
