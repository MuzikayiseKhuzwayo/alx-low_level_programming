#include "main.h"

/**
 * leet - encodes strings into 1337
 * @s: string being augmented
 *
 * Return: pointer to char string
 */

char *leet(char *s)
{
	int len, i;

	len = 0;

	while (*s != '\0')
	{
		if (*s == 'a' || *s == 'A')
		{
			*s = '4';
		}
		else if (*s == 'e' || *s == 'E')
		{
			*s = '3';
		}
		else if (*s == 'o' || *s == 'O')
		{
			*s = '0';
		}
		else if (*s == 't' || *s == 'T')
		{
			*s = '7';
		}
		else if (*s == 'l' || *s == 'L')
		{
			*s = '1';
		}
		s++;
		len++;
	}

	for (i = 0; i < len; i++)
	{
		s--;
	}
	return (s);
}
