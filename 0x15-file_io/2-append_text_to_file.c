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
 * append_text_to_file - appends text at the end of a file
 * @filename: pointer to the name of the file
 * @text_content: cotent to append at the end of the file
 *
 * Description: use open, write and close to solve
 *
 * Process:	-> declare a file descriptor variable for opening
 *			-> declare length holding variable for text writing
 *			-> check for filename NULL state
 *			-> open file with correct oflags and modes
 *			-> check for open fail
 *			-> find number of chars in @text_content
 *			-> write text_content to file in apend mode
 *			-> check fro write fail
 *			-> close file
 *			-> return success
 *
 * Return: 1 on success, -1 on failure
 *			-> fail: filename NULL, file not exist, no perm,
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len_write, len_content, close_err;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
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
