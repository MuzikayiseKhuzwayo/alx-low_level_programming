#include <stdio.h>

/**
 * main - prints out the number of arguments fed into program
 * @argc: holds the number of arguments
 * @argv: holds all the arguments provided
 *
 * Return: 0 (success)
 */

/*
 * Inputs: Argumenent thorugh CLI
 * Outputs: a string to standard out showing number of inputed args
 * To DO:
 *	1. write main to take in args
 *	2. use argc to print out args
 *	3. return 0
 * Testing:
 *	1. test with no args
 *	2. test with one arg
 *	3. test with multiple args in quotes (is one arg)
 */

int main(int argc, char *argv[])
{
	(void)argv;

	if (argc)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
