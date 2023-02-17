#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry Point.
 * section header: A C program that evaluates whether a number's last digit
 * is greater than 5, or less than 6 or equal to 0 and outputs strings.
 * Return: returns 0 (Successful)
 */
int main(void)
{
	/*
	 * initialise a variable to hold the value of the last digit, then
	 * use an if, else if statement tree tocheck the value of the number,
	 * use printf() to output a formatted array of chars onto standard out and
	 * return 0 after that task has been accomplished
	 */
	int n;
	int tmp;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	tmp = n % 10;

	if (tmp < 0)
	{
		tmp *= -1;
	}
	
	if (tmp > 5)
	{
		printf("The last digit of %d is %d and is greater than 5\n", n, tmp);
	}
	else if (tmp > 6)
	{
		printf("The last digit of %d is %d and is less than 6\n", n, tmp);
	}
	else
	{
		printf("The last digit of %d is %d and is 0\n", n, tmp);
	}

	return (0);
}
