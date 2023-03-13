#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* _strdup - returns a pointer to a new copy of a string
* @str - given string to be copied
*
* Return: pointer to string if success, or Null if failed
*/

char *_strdup(char *str)
{
	unsigned int i, j;
	char *arr;

	j = strlen(str);

	arr = malloc(sizeof(char) * (j + 1));

	if (str == NULL)
	{
		return (0);
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
