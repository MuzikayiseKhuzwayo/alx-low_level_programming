#include "main.h"
#include <stdlib.h>

/**
* create_array - creates a char array initialised with a certain char
* @size: given size of array
* @c: char initialised with
*
* Return: pointer to array if success, or Null if failed
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	arr = malloc(sizeof(char) * size);

	if (size == 0 || arr == NULL)
	{
		return (0);
	}
	else if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			arr[i] = c;
		}
	}
	return (arr);
}
