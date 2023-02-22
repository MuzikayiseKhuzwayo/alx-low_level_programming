#include "main.h"
#include <stdio.h>

/**
 *  fibonacci_sum - finds and sums all even fib nums if fib num
 *  is less than 4000000.
 *
 * Return: null.
 */
void fibonacci_sum(void)
{
	int fib_num = 0;

	int prevnum_a = 1;

	int prevnum_b = 0;

	int even_sum = 0;

	while (fib_num < 4000000)
	{
		fib_num = prevnum_a + prevnum_b;

		prevnum_b = prevnum_a;

		prevnum_a = fib_num;

		if (fib_num % 2 == 0)
		{
			even_sum += fib_num;
		}
		i++;
	}
	printf("%d\n", even_sum);
}

/**
 *  main - finds and sums all even fib nums if fib num
 *  is less than 4000000.
 *
 * Return: null.
 */
int main(void)
{
	fibonacci_sum();
	return (0);
}
