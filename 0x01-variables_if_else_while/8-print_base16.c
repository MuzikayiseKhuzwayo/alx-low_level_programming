#include <stdio.h>
/**
 * main - Entry Point.
 * section header: A C program that outputs every number in base 16.
 * Return: returns 0 (Successful)
 */
int main(void)
{
	/*
	 * use a while loop to loop through 16 times while using printf()
	 * to output formatted numbers to stdout stream.
	 * return 0 after that task has been accomplished
	 */
	int i = 0;

	while (i <= 15)
	{
		if (i < 10)
		{
			putchar(i + '0');
		}
		else if (i > 9)
		{
			putchar(i + 87);
			if (i == 15)
			{
				putchar('\n');
			}
		}
		i++;
	}

	return (0);
}
