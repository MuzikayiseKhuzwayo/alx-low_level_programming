#include "main.h"

/**
 * cap_string - capitalises the first letter of every word
 * @s: string being augmented
 *
 * Return: pointer to char string
 */

char *cap_string(char *s)
{
	int len, i, f;

	len = 0;

	f = 0;

	while (*s != '\0')
	{
		if (*s >= 97 && *s < 123 && f == 0)
		{
			*s -= 32;
			f++;
		}
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
		f++;
	}

	for (i = 0; i < len; i++)
	{
		s--;
	}
	return (s);
}
