#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints it's first @argc number of opcodes
 * @argc: argument count
 * @argv: argument values
 *
 * Return: 0 for success, 1 or 2 for Errors
 */
int main(int argc, char *argv[])
{
	int i, bytes;
	char *opcode, *first_opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	first_opcode = (char *)(&main);

	for (opcode = first_opcode; bytes > 0; opcode++, bytes--)
	{
		printf("%02x", *opcode & 0xff);
		if (bytes != 1)
			printf(" ");
	}
	printf("\n");

	return (0);
}
