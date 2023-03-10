#include "main.h"
#include <string.h>
#include <stdio.h>

/**
* _strchr - finds first occurence of @c in @s
* @s: buffer;
* @c: char being found
*
* Return: pointer to char @c in @s
*/

char *_strchr(char *s, char c)
{
	int i, found, len;
	char *pos, *tmpstr;

	found = 0, len = strlen(s);


	for (i = 0; i <= len; i++)
	{
		if (s[i] == c)
		{
			found++;
			pos = &s[i];
			break;
		}
	}
	if (found)
	{
		tmpstr = pos;
	}
	else
	{
		tmpstr = NULL;
	}
	return (tmpstr);
}
