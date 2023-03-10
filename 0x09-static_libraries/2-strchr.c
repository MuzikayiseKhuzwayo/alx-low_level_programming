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
	if (c)
		return (s);
	return (s + 1);
}
