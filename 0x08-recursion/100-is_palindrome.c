#include "main.h"
#include <string.h>

/**
* test_palindrome - use cases to find palindrome
* @s: string that definitely has chars in it
* @i: index of last check
*
*Return: an integer 0 if not pal, 1 if pal
*/

int test_palindrome(char *s, int i)
{
	if (i <= 0)
	{
		return (1);
	}
	else if (*s == s[i])
	{
		return (test_palindrome(++s, i - 2));
	}
	return (0);
}

/**
* is_palindrome - recursively find if @s is a palindrome
* @s: string
*
*Return: 1 if palindrome, 0 if not
*/

int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	else if (*s != '\0')
	{
		return (test_palindrome(s, (int)strlen(s) - 1));
	}
	return (0);
}

