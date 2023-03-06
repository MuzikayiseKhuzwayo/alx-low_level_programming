#include "main.h"

/**
* _memset - adds chars up to x bits
* @s: buffer;
* @b: char being added
* @n: number of additions
*
* Return: pointer to @s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
