#include "main.h"
#include <string.h>

/**
* _strstr - find first occurence of @needle in @haystack
* @haystack: string to be searched through;
* @needle: query string
*
* Return: pointer to byte that matches, 0 if nothing found
*/

char *_strstr(char *haystack, char *needle)
{
	int i, f, j;

	f = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (needle[j] == haystack[i + j])
			{
				f++;
			}
		}
		if (f != (int)strlen(needle))
		{
			f = 0;
		}
		else if (f == (int)strlen(needle))
		{
			break;
		}
	}
	if (f)
	{
		return (haystack + i);
	}
	return (0);
}

