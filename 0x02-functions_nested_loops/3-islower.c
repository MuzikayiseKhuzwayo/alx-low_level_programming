#include "main.h"

/**
 * _islower - checks if a given char type variable is a lowercased character
 * @c: character being checked out
 *
 * Return: On success: 1.
 * On failure, return 0.
 */
int _islower(int c)
{
	int i = 97;

	while (i <= 122)
	{
		if (c == i)
		{
			return (1);
		}
		i++;
	}
	return (0);
}
