#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches for an integer using some pointer to a func
 *	and returns first element for which @cmp is non 0
 * @array: array of integers being searched
 * @size: size of integer array
 * @cmp: function that compares values
 *
 * Return: integer number showing number of element matches
 * or returns -1 if no element matches found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) > 0)
			return (i);
	}
	return (-1);
}
