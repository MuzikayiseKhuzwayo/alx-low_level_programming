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
	int i, j, cnt;
	char c;

	cnt = 0;

	if (size < 1)
	{
		printf("\n");
		return;
	}	
	for (i = 0; i < size / 10; i++)
	{
		printf("%08x: ", i);

		for (j = 0; j < 10; j++)
		{
			printf("%02x", *b++);
			if (cnt % 2)
			{
				printf(" ");
			}
			cnt++;
		}
		b -= 10;
		for (j = 0; j < 10; j++)
		{
			c = (strchr(*b, '\\')) ? '.' : *b;
			printf("%.1s\n", c);
			b++;
		}
		cnt = 0;
	}
}
