#include "main.h"
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

/**
 *  fibonacci_98 - finds the first 98 fibo nums from 1, 2.. and prints them.
 *
 * Return: null.
 */
void fibonacci_98(void)
{
	uint64_t fib_num = 0;

	uint64_t prevnum_a = 1;

	uint64_t prevnum_b = 0;

	int i = 0;

	while (i < 98)
	{
		fib_num = prevnum_a + prevnum_b;

		prevnum_b = prevnum_a;

		prevnum_a = fib_num;

		if (i == 97)
			printf("%" PRIu64 "\n", fib_num);
		else
			printf("%" PRIu64 ", ", fib_num);
		i++;
	}
}

/**
 *  main - finds the first 98 fibo nums from 1, 2.. and prints them.
 *
 * Return: 0.
 */
int main(void)
{
	fibonacci_98();
	return (0);
}
