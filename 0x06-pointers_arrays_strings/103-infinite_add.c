#include "main.h"
#include <stdio.h>
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
	int len, len2, len3, i;
	char tmp;

	len = 0;

	len2 = 0;

	while (*n1 != '\0')
	{
		n1++;
		len++;
	}
	while (*n2 != '\0')
	{
		n2++;
		len2++;
	}
	tmp = 0;

	len3 = (len >= len2) ? len + 1: len2 + 1;
	printf("\nthe len3 determinded to be %d\n", len3);
	for (i = 0; i < size_r - 1; i++)
	{
		tmp += ((*n1 ? (*n1 - 48) : (0)) + (*n2 ? (*n2 - 48) : (0)));
		printf("The value of tmp = %d", tmp);
		r[size_r -2 - i] = ((tmp < 10) ? (tmp + 48) :
				((tmp % 10) + 48));
		tmp /= 10;
		printf(" >> len3 equals = %d", len3);
		printf(" >> Then tmp = %d\n", tmp);
		len3--;
		if (len3 < 0)
		{
			break;
		}
		n1--;
		n2--;
	}
	r[size_r - 1] = '\0';
	if (tmp > 0 || len >= size_r || len2 >= size_r) 
	{
		r = 0;
	}
	return (r);
}
