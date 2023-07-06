#include "main.h"

/**
 * clear_bit - sets value of bit to 0 at given index
 * @n: pointer to a number that needs to be modified
 * @index: index at which number needs to be modified
 *
 * Description: create a clear value that has a 1 at bit position
 *				set n to the compliment of the clear bit using &
 *				return success
 *
 * Return: 1 (success) or -1 (failure)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int clear;

	clear = 1 << index;

	*n = (*n & ~clear);
	return (1);
}
