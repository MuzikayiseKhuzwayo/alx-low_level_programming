#include "main.h"

/**
 * cap_string - capitalises the first letter of every word
 * @s: string being augmented
 *
 * Return: pointer to char string
 */

char *cap_string(char *s)
{
	int len, i;

	len = 0;

	while (*s != '\0')
	{
		if ((s[-1] == ' ') || (s[-1] == ',') || (s[-1] == ';') ||
				(s[-1] == '.') || (s[-1] == '!') || (s[-1] == '"') ||
				(s[-1] == '(') || (s[-1] == ')') || (s[-1] == '{') ||
				(s[-1] == '}') || (s[-1] == '\t') || (s[-1] == '\n'))
		{
			if (*s >= 97 && *s < 123)
			{
				*s -= 32;
			}
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
