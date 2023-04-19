#include "main.h"

/**
 * clear_bit - clears a bit at a certain position
 * @n: pointer to a number
 * @index: index to a certain position, starting at 0
 *
 * Description: Use bitwise and to clear the bit
 *
 * Return: 1 if success, -1 if failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
