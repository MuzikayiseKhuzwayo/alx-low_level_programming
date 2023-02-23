#include "main.h"

/**
 * _isdigit - checks for a digit of 0 through 9
 * @c: character that is being checked for digit status
 *
 * Return: 1 if @c is a digit, 0 if @c is anything else
 */

int _isdigit(int c)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
