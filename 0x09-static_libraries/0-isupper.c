#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: character that is being checked for uppercase status
 *
 * Return: 1 if @c is uppercase, 0 if @c is anything else
 */

int _isupper(int c)
{
	int i;

	for (i = 65; i < 91; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
