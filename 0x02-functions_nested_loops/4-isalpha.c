#include "main.h"

/**
 * _isalpha - checks if a given char type variable is a letter type char
 * @c - character being checked out
 *
 * Return: On success: 1. 
 * On failure, return 0.
 */
int _isalpha(int c)
{
	int i = 65;

	while (i <= 122)
	{
		if (i > 90 && i < 97)
		{
			i++;
			continue;
		}
		else if (c == i)
		{
			return (1);
		}
		i++;
	}
	return (0);
}
