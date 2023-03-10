#include "main.h"

/**
 * _strncat - concatenates @src to @dest string for only n bytes
 * returns a pointer to the resulting string
 * @src: new string to append
 * @dest: string being appended to
 * @n: number of bytes to append
 *
 * Return: pointer to a char string
 */

char *_strncat(char *dest, char *src, int n)
{
	int len, len2, i;

	len = 0;

	len2 = 0;

	while (*dest != '\0')
	{
		dest++;
		len++;
	}
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
	}
	*dest = '\0';

	for (i = 0; i < len; i++)
	{
		dest--;
	}
	return (dest);
}
