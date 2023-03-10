#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - adds all numbers supplied by arguments
 *	- if arguments are non integers, prints error
 * @argc: holds the number of arguments
 * @argv: holds all the arguments provided
 *
 * Return: 0 (success), 1(failure)
 */
/*
 * Input: multiple numbers
 *	Output: one single number followed by a newline
 * Input: non integer
 *	Ouput: Error
 * Input: no numbers
 *	Output: 0
 * To do:
 *	1. setup main to accept args
 *	2. declare and initialise variables:
 *		2.1 declare a sum variable to hold sum of all
 *		2.2 declare a check variable for non integer checks
 *	3. if argc > 1
 *		3.1 loop through argv using argc
 *			3.1.1 check if argv is an int or not
 *				3.1.1.1 add argv at that position to sum
 *			3.1.2 argv is not an int
 *				3.1.2.1 check = 0
 *				3.1.2.2 break
 *	4. check check variable value
 *		4.1 check is okay then print sum
 *		4.2 return 0
 *	5. check is not okay
 *		5.1 printf Error
 *		5.2 return 1
 */

int main(int argc, char *argv[])
{
	int sum, chk, i;

	sum = 0, chk = 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (strlen(argv[i]) == strspn(argv[i], "0123456789"))
			{
				sum += atoi(argv[i]);
			}
			else
			{
				chk = 0;
				break;
			}
		}
	}
	if (chk)
	{
		printf("%d\n", sum);
		return (0);
	}
	printf("Error\n");
	return (1);
}
