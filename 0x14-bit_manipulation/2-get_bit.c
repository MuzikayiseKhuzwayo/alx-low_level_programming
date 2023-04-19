#include "main.h"

/**
 * get_bit - returns the value of bit at index
 * @n: unsigned long int number to be used
 * @index: index starting from 0
 *
 * Description: use bit operations to find the bit at a specified position.
 *				if index is bigger than 32, max size of ulong, then fail
 *				else return the value at the index using >> and &
 *
 * Return: value of bit at index, or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
		return (-1);

	return ((n >> index) & 1);
}
