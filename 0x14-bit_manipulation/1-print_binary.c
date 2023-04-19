#include "main.h"

/**
 * print_binary - prints binary representation of number
 * @n: unsigned long integer to be converted
 *
 * Description: convert number to binary without arrays/malloc/division
 *				take in number, which is an unsigned long int
 *				left shift divides a number by two, we can use it
 *				while n is bigger than 0, then left shift
 *				putchar the (value & 1) at that point
 *				use recursion to reverse output, set stop to n is 1.
 *
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) + 48);
}
