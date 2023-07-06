#include "main.h"

/**
 * get_bit - return the value of a bit at a given index
 * @n: non negative number
 * @index: index of the bit starting from 0
 *
 * Description: right shift bits same number as index and return that bit.
 *
 * Return: integer index or -1 if failure
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	value = (n >> index);
	return (value & 1);
}
