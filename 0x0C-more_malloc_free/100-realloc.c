#include <stdlib.h>

/**
* _realloc - reallocates a memory blocks size using malloc and free
* @ptr: pointer previously created with malloc
* @old_size: previous size of the blocks
* @new_size: new size of the block
*
* Return: pointer to memory block, NULL if failed/erroneous input
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *newarr, *oldptr;

	oldptr = ptr;

	if (new_size == old_size)
	{
		return (ptr);
	}
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	newarr = malloc((new_size));

	if (newarr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		free(ptr);
		return ((void *)newarr);
	}
	for (i = 0; i < old_size; i++)
	{
		newarr[i] = oldptr[i];
		if (new_size == i)
			break;
	}
	free(ptr);
	return ((void *)newarr);
}
