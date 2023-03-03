#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * infinite_add - adds two integers of any size
 * @n1: number to add
 * @n2: number to add
 * @r: buffer to save into
 * @size_r: size of the buffer
 *
 * Return: pointer to a char string
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2, len3, i, len3b;
	char tmp;

	len1 = strlen(n1);

	len2 = strlen(n2);

	len3 = (len1 >= len2) ? len1 : len2;

	tmp = 0;

	len3b = len3;

	r[size_r - (size_r - len3b) + 1] = '\0';

	for (i = 0; i < size_r - 1; i++)
	{
		if (len3 < 0 && tmp == 0)
			continue;
		else
		{
			if (len1 - i > 0 && len2 - i > 0)
				tmp += (n1[len1 - i - 1] - 48) + ((n2[len2 - i - 1] - 48));
			else if (len1 - i < 1 && len2 - i > 0)
				tmp += (0) + (n2[len2 - i - 1] - 48);
			else if (len1 - i > 0 && len2 - i < 1)
				tmp += (n1[len1 - i - 1] - 48) + (0);
			r[size_r - (size_r - len3b) - i] = ((tmp < 10) ? (tmp + 48) :
				((tmp % 10) + 48));
			tmp /= 10;
		}
		len3--;
	}
	if (tmp > 0 || len1 >= size_r || len2 >= size_r)
	{
		r = 0;
	}
	return (r);
}
