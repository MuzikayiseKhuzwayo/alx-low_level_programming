#include "main.h"

/**
 * string_toupper - changes all lowercase chars into uppercase
 * @s: string being augmented
 *
 * Return: pointer to char string
 */

char *string_toupper(char *s)
{
	int len, i;

	len = 0;

	while (*s != '\0')
	{
		if (*s >= 97 && *s < 123)
		{
			*s -= 32;
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
