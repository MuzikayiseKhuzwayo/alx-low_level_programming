#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: non negative number
 *
 * Description: -> use recursion to reverse the bits
 *				-> stop condition is n must be 0 or 1
 *				-> if not then keep right shifting
 *
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + 48);
}
