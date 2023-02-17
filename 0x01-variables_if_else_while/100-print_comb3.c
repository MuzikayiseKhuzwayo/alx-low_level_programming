#include <stdio.h>
/**
 * main - Entry Point.
 * section header: A C program that outputs every combination of two nums
 * in base 10 and outputs them to stdout.
 * Return: returns 0 (Successful)
 */
int main(void)
{
	/*
	 * use nested while loops to loop through 10 by 10 times while
	 * changing the second loops condiotioneverytime appropriately so as
	 * not to allow duplocates and matching combinations
	 * to output formatted numbers to stdout stream.
	 * return 0 after that task has been accomplished
	 */
	int i = 0;

	int j = 0;

	while (i <= 9 - 1)
	{
		int tmp = i + 1;

		int tmp2 = tmp;

		j = 0;

		while (j <= 9 - tmp)
		{
			putchar(i + '0');
			putchar(tmp2 + '0');
			if (i < 8)
			{
				putchar(',');
				putchar(' ');
			}
			else if (i == 8)
			{
				putchar('\n');
			}
			tmp2++;
			j++;
		}
		i++;
	}

	return (0);
}
