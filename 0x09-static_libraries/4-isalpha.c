#include "main.h"

/**
 * _isalpha - checks if a given character is an alphabet
 * @c: character being checked
 *
 * Return: an integer. 1 if true, 0 if false
 */

int _isalpha(int c)
{
	/*
	 * do some cool stuff here too
	 */
	if ((c >= 65 && c < 92) || (c >= 97 && c < 124))
		return (1);
	return (0);
}
