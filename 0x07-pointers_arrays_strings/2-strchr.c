#include "main.h"

/**
* _strchr - finds first occurence of @c in @s
* @s: buffer;
* @c: char being found
*
* Return: pointer to char @c in @s
*/

char *_strchr(char *s, char c)
{
	int i, p, f;

	p = 0, f = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			f++;
			break;
		}
		p++;
	}
	if (f)
	{
		s = s + p;
	}
	else
	{
		s = 0;
	}
	return (s);
}

