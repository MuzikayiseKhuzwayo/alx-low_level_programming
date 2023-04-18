#include "main.h"

/**
 * count_chars - counts the number fo characters to be read
 * @ac: argument count
 * @av: argument vector
 *
 * Return: number of characters to be read
 */

int count_chars(int ac, char *av)
{
	int c, count = 0;
	FILE *f;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	f = fopen(av, "r");
	if (f == NULL)
	{
		dprintf(2, "Error: Can't read from file %s\n", av);
		exit(98);
	}
	for (c = getc(f); c != EOF; c = getc(f))
		count += 1;
	fclose(f);

	return (count);
}

/**
 * main - copies the contents of files from one to another
 * @argc: argument count
 * @argv: argument vectors
 *
 * Decription: main function of cp program
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int count, fd, read_value, new_value, write_value, close1, close2;
	char *read_content;

	count = count_chars(argc, argv[1]);

	read_content = malloc(count);
	fd = open(argv[1], O_RDONLY);
	read_value = read(fd, read_content, count);
	if ((fd == -1) || (read_value == -1))
	{
		free(read_content);
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	new_value = open(argv[2], O_TRUNC | O_RDWR | O_CREAT, 0664);
	write_value = write(new_value, read_content, read_value);
	if ((new_value == -1) || (write_value == -1))
	{
		free(read_content);
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	close2 = close(new_value);
	close1 = close(fd);
	if (close2 == -1)
	{
		free(read_content);
		dprintf(2, "Error: Can't close fd %d\n", new_value);
		exit(100);
	}
	if (close1 == -1)
	{
		free(read_content);
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	return (0);
}
