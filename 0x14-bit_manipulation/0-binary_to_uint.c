#include "main.h"

/**
 * is_valid_binary - checks if number is a binary number
 * @str: given string hopefully made up of 1s and 0s
 *
 * Return: 1 if true, 0 if false
 */
int is_valid_binary(const char *str)
{
	int i = 0;

	if (str == NULL)
		return (FALSE);

	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '1')
			return (FALSE);
		i++;
	}
	return (TRUE);
}

/**
 * binary_to_uint - converts a binary number to an unsigned integer
 * @b: string made up of 0s and 1s
 *
 * Description: take in b, then check if b is valid using a helper func
 *				If not valid, return 0, if it is valid move on...
 *				loop through b for every 'digit' convert and add to num
 *				return the number later on
 *
 * Return: converted number if success
 *			0 if b is made up of non 1/0s or b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, mult = 1;
	int i = 0;

	if (!is_valid_binary(b))
		return (0);
	while (b[i] != '\0')
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		num += (b[i] - 48) * mult;
		mult *= 2;
		i--;
	}

	return (num);
}
