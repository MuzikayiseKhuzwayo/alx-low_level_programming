#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - creates a two dimensional array of integers from
*	given dimesions
* @width: width dimension array
* @height: height of array
*
* Return: pointer to array if success, or Null if failed
*/

int **alloc_grid(int width, int height)
{
	int i, j;

	int **arr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int *) * (height));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			while (i > -1)
			{
				free(arr[i]);
				i--;
			}
			free(arr);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
