#include "main.h"

/**
 * swap_int - takes in two pointers to integers and swaps their
 *  referenced values with eachother
 * @a: pointer to a variable of int type
 * @b: pointer to a variable of int type
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;

	*a = *b;

	*b = tmp;
}
