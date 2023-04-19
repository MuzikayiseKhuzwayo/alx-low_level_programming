#include "main.h"

/**
 * flip_bits - gives number of its to flip in order to get a different number
 * @n: unsigned integer long number
 * @m: unsigned integer long number
 *
 * Description: use XOR to find the difference between the two numbers
 *				find XOR of the two and store it
 *				for every 1 bit that exists in the XOR value, add to the return
 *				use a while loop, while xor value is bigger than 0
 *				divide xor value by two every time using >>
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num_bits = 0;
	unsigned long int xor_value = n ^ m;

	while (xor_value)
	{
		num_bits += xor_value & 1;
		xor_value >>= 1;
	}

	return (num_bits);
}
