#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints every number between @n and 98 in sequence
 * @n: The integer to add
 *
 * Return: null.
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			if (n == 98)
			{
				printf("%d\n", n);
			}
			else
			{
				printf("%d, ", n);
			}
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{

			if (n == 98)
			{
				printf("%d\n", n);
			}
			else
			{
				printf("%d, ", n);
			}
			n--;
		}
	}
}
