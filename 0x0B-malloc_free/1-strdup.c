#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* _strdup - returns a pointer to a new copy of a string
* @str: given string to be copied
*
* Return: pointer to string if success, or Null if failed
*/

char *_strdup(char *str)
{
	unsigned int i, j;
	char *arr;

	if (str == NULL)
	{
		return (NULL);
	}

	j = strlen(str);

	arr = malloc(sizeof(char) * (j + 1));
	if (arr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < j; i++)
		{
			arr[i] = str[i];
		}
		arr[j] = '\0';
	}
	return (arr);
}
