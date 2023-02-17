#include <stdio.h>
/**
 * main - Entry Point.
 * section header: A C program that outputs alphabet characters followed by
 * a more capitalised alphas and a new line afterwards.
 * Return: returns 0 (Successful)
 */
int main(void)
{
	/*
	 * use a for loop to loop through 26 times while outputting chars and
	 * again to output capitalised letters using putchar() function.
	 * return 0 after that task has been accomplished
	 */
	int i = 97;

	int j = 65;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	while (j <= 90)
	{
		putchar(j);
		if (j == 90)
		{
			putchar('\n');
		}
		j++;
	}
	return (0);
}
