#include <stdio.h>
/**
 * main - Entry Point.
 * section header: A C program that outputs alphabet characters except e and q
 * followed byva new line character at the end.
 * Return: returns 0 (Successful)
 */
int main(void)
{
	/*
	 * use a while loop to loop through 26 times while outputting chars and
	 * and if its e or q then don't putchar() until you put a newline.
	 * return 0 after that task has been accomplished
	 */
	int i = 97;

	while (i <= 122)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
			if (i == 122)
			{
				putchar('\n');
			}
		}
		i++;
	}

	return (0);
}
