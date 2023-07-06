#include "main.h"

/**
 * flip_bits - returns number of bits to flip to get from n to m
 * @n: first non negative number
 * @m: second non negative number
 *
 * Description: setup a count and a loop variable
 *				loop 32 times (int has 32 bits)
 *				check every bit on m against n, if different, increment count
 *				return count
 *
 * Return: unsigned int number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	int i = 0;

	for (; i < 64; i++)
	{
		if (((n >> i) & 1) != ((m >> i) & 1))
			count++;
	}

	return (count);
}
