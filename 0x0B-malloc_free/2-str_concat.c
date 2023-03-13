#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* str_concat - concatenates two given strings using malloc
* @s1: given string to be concatenated
* @s2: given string to be concatenated
*
* Return: pointer to string if success, or Null if failed
*/

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k;
	char *arr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	j = strlen(s1), k = strlen(s2);

	arr = malloc(sizeof(char) * (j + k + 1));

	if (arr == NULL)
	{
		return (NULL);
	}
	else if (arr != NULL)
	{
		for (i = 0; i < j; i++)
		{
			arr[i] = s1[i];
		}
		for (i = 0; i < k; i++)
		{
			arr[i + j] = s2[i];
		}
		arr[j + k] = '\0';
	}
	return (arr);
}
