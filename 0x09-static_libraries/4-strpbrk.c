#include "main.h"

/**
* _strpbrk - find first occurence of @accept in @s
* @s: string to be searched through;
* @accept: query string
*
* Return: pointer to byte that matches, 0 if nothing found
*/

char *_strpbrk(char *s, char *accept)
{
	int i, f, j;

	f = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				f = 1;
				break;
			}
		}
		if (f)
		{
			break;
		}

	}
	if (f)
	{
		return (s + i);
	}
	return (0);
}
