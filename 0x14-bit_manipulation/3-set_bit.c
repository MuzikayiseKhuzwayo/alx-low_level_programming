#include "main.h"

/**
 * set_bit - set the value of a bit to 1 at an index
 * @n: unsigned long int number
 * @index: index starting from 0
 *
 * Description: use bitwise OR to set a bit to 1 at the index
 *				get the correct value by right shifting 1 to the index
 *				return 1 at pass
 *
 * Return: 1 if it worked, -1 if failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);

	*n |= (1 << index);

	return (1);
}
