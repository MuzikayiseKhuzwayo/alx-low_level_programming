#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * positive_or_negative - Function.
 * section header: A C function that evaluates whether or not a number is
 * positive or negative and outputs a string to stdout in each case.
 * Return: returns 0 (Successful)
 */
void positive_or_negative(int i)
{
	/*
	 * use an if, else if statement tree tocheck the sign of the number n,
	 * use printf() to output a formatted array of chars onto standard out and
	 * return 0 after that task has been accomplished
	 */
	int n = i;

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
}
