#include "main.h"

/**
* _memcpy - copies memory area from @src to @dest
* for @n chars
* @dest: buffer to be copied into;
* @src: buffer being copied from
* @n: number of chars being copied
*
* Return: pointer to @dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}


	return (dest);
}

