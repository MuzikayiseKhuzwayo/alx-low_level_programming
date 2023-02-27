#include "main.h"

/**
 * _strlen - takes in an array of pointers to chars and
 * returns the length of the array
 * @s: pointer to the string of arrays
 *
 * Return: length of string @s (number of chars except '\0')
 */

int _strlen(char *s)
{
	int len;

	len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}

	return (len);
}
