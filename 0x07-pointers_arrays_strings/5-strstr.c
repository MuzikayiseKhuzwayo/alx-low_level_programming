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

	i = 0;

	if (*needle == 0)
	{
		return (haystack);
	}

	while (*haystack)
	{
		while (haystack[i] == needle[i] && needle[i] != '\0')
		{
			i++;
		}
		if (needle[i] == '\0')
			return (haystack);
		else
			needle -= i;
		haystack++;
	}
	return ('\0');
}

