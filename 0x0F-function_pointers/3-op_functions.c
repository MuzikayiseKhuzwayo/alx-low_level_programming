#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add - adds two integer numbers @a and @b and returns the sum
 * @a: number to be added
 * @b: number to be added
 *
 * Return: sum of @a and @b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two integer numbers @a and @b
 * @a: number
 * @b: number
 *
 * Return: difference of @a and @b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integer numbers @a and @b
 * @a: number
 * @b: number
 *
 * Return: product of @a and @b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integer numbers @a and @b
 * @a: number
 * @b: number
 *
 * Return: division result of @a and @b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - gives remainder of two integer numbers @a and @b
 * @a: number
 * @b: number
 *
 * Return: remainder of @a and @b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
