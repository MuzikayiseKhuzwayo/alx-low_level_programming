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
	 */
	int i = 0;

	int j = 0;

	int k = 0;

	while (i < 9 - 1)
	{
		j = i + 1;

		while (j < 9)
		{
			k = j + 1;

			while (k < 10)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				if (i < 7)
				{
					putchar(',');
					putchar(' ');
				}
				else if (i == 7)
				{
					putchar('\n');
				}
				k++;
			}
			j++;
		}
		i++;
	}

	return (0);
}
