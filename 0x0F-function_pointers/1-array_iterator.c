#include "function_pointers.h"
#include <stddef.h>

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
	size_t i;

	if (array == NULL || (int)size <= 0 || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
