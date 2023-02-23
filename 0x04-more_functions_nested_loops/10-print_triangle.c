#include "main.h"

/**
 * print_triangle - prints out a triangle of @size base and height and
 * newlines to stdout
 * @size: deliniates the dimensionality of the sides
 *
 * Return - null (function is void type)
 */

void print_triangle(int size)
{
	int i, j, k, tmp;

	tmp = size - 1;

	j = 0;

	do
	{
		i = 0;
		k = 0;

		for (i = 0; i < tmp; i++)
		{
			_putchar(' ');
		}
		for (k = 0; k < j + 1; k++)
		{
			_putchar('#');
		}	
		_putchar('\n');
		tmp--;
		j++;
	}while (j < size);
}
