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
	printf("%s, search query = %s\n", haystack, needle);

	while (*haystack != '\0')
	{
		char *a = haystack;
		char *b = needle;
		while (*a == *b && *b != '\0')
		{
			a++;
			b++;
		}
		if (*b == '\0')
			return (haystack);
		printf("increment haystack, ");
		a++;
		printf("haystack = %s\n", a);
	}
	return (0);
}

