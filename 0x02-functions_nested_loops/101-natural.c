#include "main.h"
#include <stdio.h>

/**
 *  naturals_three_five- finds multiples of 3 and 5 and sums them all
 *
 * Return: null.
 */
void naturals_three_five(void)
{
	int sum = 0;

	int i = 3;

	while (i < 1024)
	{
		if (i % 3 == 0)
			sum += i;
		else if (i % 5 == 0)
			sum += i;
		i++;
	}
	printf("%d\n", sum);
}

/**
 *  main - uses the function to get values
 *
 * Return: 0 (Successful).
 */
int main(void)
{
	naturals_three_five();
	return (0);
}
