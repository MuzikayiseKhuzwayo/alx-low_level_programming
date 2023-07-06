#include "main.h"

/**
 * binary_to_uint - converts a binary number to an integer
 * @b: pointer to string of 0 and 1 chars
 *
 * Description: -> break out if char is non 1 or 0
 *				-> for every char of 1, left shift 1 in new value
 *				-> move to the left
 *
 * Return: unsigned integer
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int value;

	value = 0;

	if (b == NULL)
		return (value);

	for (; *b != '\0'; b++)
	{
		if (*b == '1')
			value = (value << 1) | 1;
		else if (*b == '0')
			value = (value << 1);
		else
		{
			value = 0;
			break;
		}
	}

	return (value);
}
