#include "function_pointers.h"

/**
 * array-iterator - executes a function given as a parameter on every element
 * @array: pointer to array of integers
 * @size: size of the array
 * @action: function that executes on every index
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (array == NULL || size <= 0 || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
