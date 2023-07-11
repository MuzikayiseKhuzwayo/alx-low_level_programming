#include "main.h"

/**
 * get_chars - get the number of characters while validating
 * @ac: argument count
 * @av: argument vector
 *
 * Return: number of characters
 */

int get_chars(int ac, char *av)
{
	int count;
	FILE *fileptr;
	char c;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fileptr = fopen(av, "r");
	if (fileptr == NULL)
	{
		dprintf(2, "Error: Can't read from file %s\n", av);
		exit(98);
	}
	for (c = getc(fileptr); c != EOF; c = getc(fileptr))
		count += 1;
	fclose(fileptr);

	return (count);
}

/**
 * main - copies the content of a file to another file
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Description: -> check for propper usage using outer function
 *				->
 *
 * Return: integer values
 */

int main(int argc, char *argv[])
{
	char *read_str;
	int close_to, close_from, open_val, read_val, write_val, to_open, count;

	count = get_chars(argc, argv[1]);
	read_str = malloc(count);
	open_val = open(argv[1], O_RDONLY);
	read_val = read(open_val, read_str, count);
	if ((open_val == -1) || (read_val == -1))
	{
		free(read_str);
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	to_open = open(argv[2], O_TRUNC | O_RDWR | O_CREAT, 0664);
	write_val = write(to_open, read_str, read_val);
	if ((to_open == -1) || (write_val == -1))
	{
		free(read_str);
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	close_to = close(to_open);
	close_from = close(open_val);
	if (close_to == -1)
	{
		free(read_str);
		dprintf(2, "Error: Can't close fd %d\n", to_open);
		exit(100);
	}
	if (close_from == -1)
	{
		free(read_str);
		dprintf(2, "Error: Can't close fd %d\n", open_val);
		exit(100);
	}
	return (0);
}
