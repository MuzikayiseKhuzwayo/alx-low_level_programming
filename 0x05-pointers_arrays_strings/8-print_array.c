#include "main.h"
#include <stdio.h>

/**
 * print_array - takes in an array of pointers to ints and
 * prints @n number of element of the array
 * @a: pointer to the integer array
 * @n: number of elements to print out
 *
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			if (i == n - 1)
			{
				printf("%d\n", a[i]);
			}
			else
			{
				printf("%d, ", a[i]);
			}
		}
	}
	else
	{
		printf("\n");
	}
}
