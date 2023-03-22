#include "function_pointers.h"
#include <stdlib.h>

/**
 * array-iterator - executes a function given as a parameter on every element
 * @array: pointer to array of integers
 * @size: size of the array
 * @action: function that executes on every index
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array != NULL && (int)size > 0 && action != NULL)
	{
		for (i = 0; i < (int)size; i++)
		{
			(*action)(array[i]);
		}
	}
}
