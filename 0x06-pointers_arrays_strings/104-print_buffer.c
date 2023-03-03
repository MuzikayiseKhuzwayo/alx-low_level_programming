#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_buffer - prints a given string's buffer
 * @size: size of the buffer
 * @b: actual buffer string itself
 *
 * Return: Nothing
 */

void print_buffer(char *b, int size)
{
	int i, j, cnt, cnt2, cnt3;
	char c;

	cnt = 0;

	cnt2 = 10;

	cnt3 = 0;

	if (size < 1)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < (size / 10) + 1; i++)
	{
		if (i == size / 10)
			cnt2 = size % 10;
		printf("%08x: ", i * 10);

		for (j = 0; j < 10; j++)
		{
			if (j < cnt2)
				printf("%02x", *b++);
			else
			{
				printf("  ");
				cnt3++;
			}
			
			if (cnt % 2)
			{
				printf(" ");
			}
			cnt++;
		}

		b = b - 10 + cnt3;
		for (j = 0; j < cnt2; j++)
		{
			if (*b > 31 && *b < 127)
				c = *b;
			else
				c = '.';
			printf("%c", c);
			b++;
		}
		printf("\n");
		cnt = 0;
	}
}
