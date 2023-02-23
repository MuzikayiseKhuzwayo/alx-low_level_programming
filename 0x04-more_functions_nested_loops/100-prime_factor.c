#include "main.h"
#include <stdio.h>

/**
 * prime_factor - finds the largest prime factor of a number @n
 * and returns the value of that prime factor
 * @n: number being tested against
 *
 * Return: null (void type function)
 */

void prime_factor(unsigned long int n)
{
	unsigned long int i, tmp;

	i = 2;

	do {
		if (n % i == 0)
		{
			tmp = i;
			n /= i;
			i = 2;
		}
		else
		{
			i++;
			continue;
		}
	} while (n > 1);

	printf("%ld\n", tmp);
}

/**
 * main - Entry Point. Calls prime_factor function for execution.
 *
 * Return: 0 (Successful)
 */

int main(void)
{
	unsigned long int a;

	a = 612852475143;

	prime_factor(a);

	return (0);
}
