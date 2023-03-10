#include <stdio.h>

/**
 * main - prints all the arguments it recieves
 * @argc: holds the number of arguments
 * @argv: holds all the arguments provided
 *
 * Return: 0 (success)
 */

/*
 * Input: mutliple args
 * Output: each separate arg on a new line in stdout
 * To Do:
 *	1. setup main with all argument catching
 *	2. use argc to loop through argv
 *	3. for every element in argv, printf that element with a '\n'
 *	4. return 0
 * Testing:
 *	1. test with no args, should print argv[0]
 *	2. test with multiple args, shoul print all of them
 *	3. test with one super arg, an arg in quotes
 * Considerations:
 *	1. You must use argc and argv in some useful way for gcc
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
