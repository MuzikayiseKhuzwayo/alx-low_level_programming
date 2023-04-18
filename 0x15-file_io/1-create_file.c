#include "main.h"

/**
 * _strlen - gives the length of a NULL terminated string
 * @string: string being counted
 *
 * Return: length of string;
 */
ssize_t _strlen(char *string)
{
	ssize_t len = 0;

	while (string[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * create_file - creates a file
 * @filename: pointer to the file
 * @text_content: content of the file
 *
 * Description: use open, write and close to write some content to a file
 *
 * Process: 	-> declare file descriptor for file ops
 *				-> declare write ssize_t variables for length checks
 *				-> check for filename NULL state
 *				-> open file with ordwr, and ocreat, and otrunc
 *				-> check for open fail
 *				-> find number of chars in text_content
 *				-> write contents to file, store chars written
 *				-> check for write fail (number of chars is less than written)
 *				-> close file
 *				-> return success
 *
 * Return: 1 on success, -1 on failure
 *			-> fail: open fail, malloc fail, write fail, permission fails
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len_write, len_content, close_err;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	len_content = _strlen(text_content);
	len_write = write(fd, text_content, len_content);
	if (len_write == -1 || len_content != len_write)
		return (-1);

	close_err = close(fd);
	if (close_err == -1)
		return (-1);
	return (1);
}
