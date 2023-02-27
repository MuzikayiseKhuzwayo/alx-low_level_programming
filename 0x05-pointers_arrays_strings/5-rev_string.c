#include "main.h"
#include <stdio.h>

/**
 * rev_string - takes in an array of pointers to chars and
 * returns the reversed version of that array
 * @s: pointer to the string of arrays
 *
 * Return: Nothing
 */

void rev_string(char *s)
{
	int len, i;

	char tmp;

	len = 0;

	i = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	for (i = 0; i < len; i++)
	{
		s--;
	}

	for (i = 0; i < (len) / 2; i++)
	{
		tmp = s[len - 1 - i];
		s[len - 1 - i] = s[i];
		s[i] = tmp;
	}
}
