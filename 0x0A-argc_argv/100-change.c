#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - takes in an integer number of cents
 *	- outputs the lowest number of coin divisions to be made to get that
 * @argc: holds the number of arguments
 * @argv: holds all the arguments provided
 *
 * Return: 0 (success), 1 (failure)
 */

/*
 * Input: integer
 *	Output: formatted integer to stdout
 * Input: nothing
 *	Output: Error
 * To Do:
 *	1. make main able to handle args
 *	2. declare and init variables
 *		2.1 sum of coins
 *		2.2 cents value which is argv[1]
 *	3. if argv[1] is negative
 *		3.1 printf 0 with a '\n'
 *	4. if argc == 2
 *		4.1 go through some cases for 25, 10, 5, 2 and 1
 *		... basically use integer div and modulo operator
 *		... if the case is true, then augment cents
 *		4.2 printf coinsum
 *		4.3 return 0
 *	5. printf Error
 *	6. return 1
 */

int main(int argc, char *argv[])
{
	int coinsum, cents;

	coinsum = 0;

	if (argc == 2)
	{
		if ((int)strspn(argv[1], "-") == 1)
		{
			printf("0\n");
			return (0);
		}
		else if (strlen(argv[1]) == strspn(argv[1], "0123456789"))
		{
			cents = atoi(argv[1]);
			coinsum += cents / 25;
			cents %= 25;
			coinsum += cents / 10;
			cents %= 10;
			coinsum += cents / 5;
			cents %= 5;
			coinsum += cents / 2;
			cents %= 2;
			coinsum += cents / 1;
			cents %= 1;

			printf("%d\n", coinsum);
			return (0);
		}
	}
	printf("Error\n");
	return (1);
}
