#include "main.h"

/**
 * read_textfile - reads a text file an prints it to standard output
 * @filename: ointer to the file
 * @letters: number of letters to print out
 *
 * Description: use read, open, write and close to write the file to stdout
 *
 * Process:		-> declare a file descriptor for file ops
 *				-> declare read and write ssize_t variables for length checks
 *				-> check for filename NULL state
 *				-> open file with readonly spec, check for fail
 *				-> create a buffer of given size @letters, check for malloc fail
 *				-> read file to buffer, store chars read in
 *				-> close file
 *				-> check for read fail
 *				-> write contents to STDout, store chars written
 *				-> check for write fail
 *				-> free buffer where needed
 *				-> return number of chars written
 *
 * Return: number of letters printed out if success
 *			0 if failed
 *			-> fail conditions: filename is NULL, write, open, or read fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t len_read, len_write, close_err;
	char *buffer;

	if (filename == NULL || letters == 0)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	len_read = read(fd, buffer, letters);
	close_err = close(fd);
	if (len_read == -1 || close_err == -1)
	{
		free(buffer);
		return (0);
	}

	len_write = write(STDOUT_FILENO, buffer, len_read);
	free(buffer);
	if (len_read != len_write)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	return (len_write);
}
