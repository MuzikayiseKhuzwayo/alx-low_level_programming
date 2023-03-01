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
	do {
		if (*s1 == *s2 && *s1 == '\0')
		{
			return (0);
		}
		else if (*s1 == '\0')
		{
			return (*s1++ - *s2++);
		}
		else if (*s1 != '\0')
		{
			s1++;
			s2++;
		}
	} while (*s1 == *s2);

	return (*--s1 - *--s2);
}
