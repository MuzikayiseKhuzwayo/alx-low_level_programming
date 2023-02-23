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

	for (j = 0; j < size; j++)
	{
		i = 0;

		for (i = 0; i < size; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
