#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two arguments supplied to it
 * @argc: holds the number of arguments
 * @argv: holds all the arguments provided
 *
 * Return: 0 (success), 1 (failure)
 */

/*
 * Input: 2 numbers exactly
 * Output: 1 integer number, the product of the inputs
 * To Do:
 *	1. write main with capability to take args
 *	2. check if argc == 3
 *		2.1 convert string to integers
 *		2.2 printf the product of argv[1] and argv[2]
 *		2.3 return 0
 *	3. if argc is not three, then there was an error
 *		3.1 printf Error
 *		3.2 return 1
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	printf("Error\n");
	return (1);
}
