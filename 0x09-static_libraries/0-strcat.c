#include "main.h"

/**
 * _strcat - concatenates @src to @dest string and
 * returns a pointer to the resulting string
 * @src: new string to append
 * @dest: string being appended to
 *
 * Return: pointer to a char string
 */

char *_strcat(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (*dest != '\0')
	{
		dest++;
		len++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		len++;
	}
	*dest = '\0';

	for (i = 0; i < len; i++)
	{
		dest--;
	}
	return (dest);
}
