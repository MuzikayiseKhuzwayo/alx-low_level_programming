#include "main.h"

/**
 * _strncpy - copies @src to @dest string for only n bytes
 * if length of src is less than n, gets padded by null bytes
 * returns a pointer to the resulting string
 * @src: string being copied
 * @dest: string being created
 * @n: number of bytes to copy
 *
 * Return: pointer to a char string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int len, len2, i;

	len = 0;

	len2 = 0;

	for (i = 0; i < n; i++)
	{
		if (*src != '\0')
		{
			*dest = *src;
			dest++;
			src++;
			len++;
			len2++;
		}
		else
		{
			*dest = '\0';
			dest++;
			len++;
		}
	}

	for (i = 0; i < len; i++)
	{
		dest--;
	}
	return (dest);
}
