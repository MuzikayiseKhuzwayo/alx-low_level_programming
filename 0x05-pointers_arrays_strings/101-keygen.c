#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random passwords for keygen executable
 *
 * Return: 0 (success)
 */

int main(void)
{
	int s;
	char c;

	srand(time(NULL));

	while (s <= 2645)
	{
		c = rand() % 128;
		s = s + c;
		putchar(c);
	}
	putchar(2772 - s);
	return (0);
}
