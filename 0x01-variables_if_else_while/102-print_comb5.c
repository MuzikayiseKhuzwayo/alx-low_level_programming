#include <stdio.h>
/**
 * main - Entry Point.
 * section header: A C program that outputs every combination of two nums
 * out of 100 and outputs them to stdout.
 * Return: returns 0 (Successful)
 */
int main(void)
{
	/*
	 * use nested while loops to loop through 100 by 100 times while
	 * changing the second loops condiotioneverytime appropriately so as
	 * not to allow duplocates and matching combinations
	 * to output formatted numbers to stdout stream.
	 * return 0 after that task has been accomplished
	 */
	int i = 0;

	int j = 0;

	while (i < 99)
	{
		j = i + 1;

		while (j < 100)
		{
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			putchar(' ');
			putchar(j / 10 + '0');
			putchar(j % 10 + '0');
			if (i <= 98 && j < 99)
			{
				putchar(',');
				putchar(' ');
			}
			else if (i == 98 && j == 99)
			{
				putchar('\n');
			}
			j++;
		}
		i++;
	}
	return (0);
}
