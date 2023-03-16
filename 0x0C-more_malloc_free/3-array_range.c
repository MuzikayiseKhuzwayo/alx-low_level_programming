#include <stdlib.h>

/**
* array_range - creates anarray of integers from min to max (Included)
* @min: minimum number of range
* @max: maximum number
*
* Return: pointer to array, NULL if failed/erroneous input
*/

int *array_range(int min, int max)
{
	int i, j, *newarr;

	j = 0;

	if (min > max)
		return (NULL);

	newarr = malloc(sizeof(int) * (max - min + 1));

	if (newarr == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		newarr[j] = i;
		j++;
	}
	return (newarr);
}
