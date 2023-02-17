#include <stdio.h>
/**
 * main - Entry Point.
 * section header: A C program that outputs alphabet characters followed by
 * a new line for every alphabet in the alphabet in reverse order.
 * Return: returns 0 (Successful)
 */
int main(void)
{
	/*
	 * use a while loop to loop through 26 times while outputting chars and
	 * a new line using putchar() function from srdio.h.
	 * return 0 after that task has been accomplished
	 */
	int i = 122;

	while (i >= 97)
	{
		putchar(i);
		if (i == 97)
		{
			putchar('\n');
		}
		i--;
	}

	return (0);
}
