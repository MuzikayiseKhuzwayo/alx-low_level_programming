#include "main.h"

/**
 * _atoi - takes in an array of pointers to chars and
 * returns the integer represented by those values
 * @s: pointer to the string
 *
 * Return: integer
 */

int _atoi(char *s)
{
	int len, i, num, neg, numchk;

	len = 0;

	num = 0;

	numchk = 0;

	neg = 1;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	for (i = 0; i < len; i++)
	{
		s--;
	}

	if (len == 0)
	{
		return (0);
	}
	else
	{
		/* keep mulitplying by ten as long as there are digits*/

		for (i = 0; i < len; i++)
		{
			if (s[i] == '-')
                	{
                        	neg *= -1;
                	}
			else if (s[i] == ' ' || s[i] == '+')
                        {
                                continue;
                        }
			else if (s[i] >= 48 && s[i] < 58)
			{
				num = num * 10 + (int)(s[i] - '0');
				numchk++;
			}
			else if (numchk)
			{
				break;
			}
		}
	}
	num *= neg;
	return (num);
}
