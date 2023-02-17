#include <stdio.h>
/**
 * main - Entry Point.
 * section header: A C program that outputs every number in base 10.
 * Return: returns 0 (Successful)
 */
int main(void)
{
	/*
	 * use a while loop to loop through 10 times while using printf()
	 * to output formatted numbers to stdout stream.
	 * return 0 after that task has been accomplished
	 */
	int i = 0;

	while (i <= 9)
	{
		putchar(i + '0');
		if (i == 9)
		{
			putchar('\n');
		}
		i++;
	}

	return (0);
}
