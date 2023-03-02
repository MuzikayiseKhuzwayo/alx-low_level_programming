#include "main.h"

/**
 * rot13 - implements rot13 with one if statement and 2 loops
 * @s: string being augmented
 *
 * Return: pointer to char string
 */

char *rot13(char *s)
{
	int len, i;

	len = 0;

	while (*s != '\0')
	{
		if (*s >= 97 && *s < 110)
		{
			*s += 13;
		}
		else
		{
			*s -= 13;
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
