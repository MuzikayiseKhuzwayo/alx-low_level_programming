#include "main.h"

/**
* _pow_recursion - recursively find the value of @x
* raised to the power of @y
* @x: integer number
* @y: power
*
*Return: an integer value for the result of @x to the @y
*/

int _pow_recursion(int x, int y)
{
	if (y >= 1)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else if (y < 0)
	{
		return (-1);
	}
	return (1);
}
