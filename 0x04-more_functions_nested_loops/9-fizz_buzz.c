#include "main.h"
#include <stdio.h>

/**
 * fizz_buzz - prints out 0 through 100 followed by newline to stdout
 * if number is multiple of 3, print Fizz
 * if number is a multiple of 5 print Buzz
 * if number is a multiple of 3 and 5, print FizzBuzz
 *
 * Return - null (function is void type)
 */

void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i == 1)
		{
			printf("%d", i);
			continue;
		}
		else if ((i % 3 == 0) && !(i % 5 == 0))
		{
			printf(" Fizz");
		}
		else if (!(i % 3 == 0) && (i % 5 == 0))
		{
			printf(" Buzz");
		}
		else if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf(" FizzBuzz");
		}
		else if (i < 100)
		{
			printf(" %d", i);
		}
	}
	printf("\n");
}

/**
 * main - Entry Point. Calls fizz_buzz function for execution.
 *
 * Return - 0 (Successful)
 */

int main(void)
{
	fizz_buzz();

	return (0);
}
