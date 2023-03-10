#include <stdio.h>

/**
 * main - a program that prints it's own name, followed by a newline
 * @argc: holds the number of arguments
 * @argv: holds all the arguments provided
 *
 * Return: 0 (success)
 */

/*
 * Input: none
 * Output: the program's name, stored in argv[0]
 * ToDo:
 *	1. write main with arguments
 *	2. use printf to output a formatted string
 *		2.1 format must be "./name"
 *	3. return 0
 * Testing:
 *	1. gcc compile and name it out
 *	2. run to check if it outputs './out'
 *	3. rename the executable and rerun to check if name changed
 */

int main(int argc, char *argv[])
{
	if (argc)
		printf("%s\n", argv[0]);
	return (0);
}
