#include "main.h"

/**
 * print_square - prints out a square of @size length and height and
 * newlines to stdout
 * @size: deliniates the dimensionality of the sides
 *
 * Return - null (function is void type)
 */

void print_square(int size)
{
	int i, j;

	j = 0;

	do {
		i = 0;

		for (i = 0; i < size; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
		j++;
	} while (j < size);
}
