#include "main.h"

/**
 * _strcpy - takes in two arrays of pointers to chars and
 * copies the value of one character by character into the other
 * @src: pointer to the string containing data
 * @dest: pointer that needs populating with copy
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *tmp;

	tmp = dest;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	dest++;
	dest = tmp;
	return (dest);
}
