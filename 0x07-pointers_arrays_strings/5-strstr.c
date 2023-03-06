#include "main.h"
#include <string.h>
#include <stdio.h>
/**
* _strstr - find first occurence of @needle in @haystack
* @haystack: string to be searched through;
* @needle: query string
*
* Return: pointer to byte that matches, 0 if nothing found
*/

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
	{
		return (haystack);
	}

	while (*haystack)
	{
		i = 0;

		while (haystack[i] == needle[i] && needle[i] != '\0')
		{
			i++;
		}
		if (needle[i] == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return ('\0');
}

