#include <stdlib.h>

/**
* malloc_checked - allocates memory using malloc
* @b: size of bytes to alllocate
*
* Return: pointer if passed, 98 if failed
*/

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);
	else
		return (p);
}
