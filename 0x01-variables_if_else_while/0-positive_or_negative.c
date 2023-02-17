#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry Point.
 * section header: A C program that evaluates whether or not a number is
 * positive or negative and outputs a string to stdout in each case.
 * Return: returns 0 (Successful)
 */
int main(void)
{
	/*
	 * use an if, else if statement tree tocheck the sign of the number n,
	 * use printf() to output a formatted array of chars onto standard out and
	 * return 0 after that task has been accomplished
	 */
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}

	return (0);
}
