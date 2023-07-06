#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to a number that needs to be modified
 * @index: index at which number needs to be modified
 *
 * Description: create an addition to update number with
 *				set n to bitwise or of addition
 *				return success
 *
 * Return: integer 1 if success, -1 if failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int set;

	set = 1 << index;

	*n = (*n | set);
	return (1);
}
