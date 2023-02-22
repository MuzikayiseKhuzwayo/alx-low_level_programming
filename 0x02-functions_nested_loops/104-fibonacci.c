#include "main.h"
#include <stdio.h>

/**
 *  fibonacci_98 - finds the first 98 fibo nums from 1, 2.. and prints them.
 *
 * Return: null.
 */
void fibonacci_98(void)
{
	int fib_num = 0;

	int prevnum_a = 1;

	int prevnum_b = 0;

	int i = 0;

	while (i < 98)
	{
		fib_num = prevnum_a + prevnum_b;

		prevnum_b = prevnum_a;

		prevnum_a = fib_num;

		if (i == 49)
			printf("%d\n", fib_num);
		else
			printf("%d, ", fib_num);
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
