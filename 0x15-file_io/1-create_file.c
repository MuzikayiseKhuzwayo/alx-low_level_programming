#include "main.h"

/**
 * create_file - create a file
 *
 * @filename: name of file to be created
 * @text_content: string to write to file
 *
 * Description: -> check for error inputs (NULL)
 *				-> if file to be written to is non existent, create it
 *				-> open or reopen the file, check open fail
 *				-> write to the file, check write fail
 *				-> close the file
 *				-> return success
 *
 * Return: 1 (success) or -1 (failure)
 */

int create_file(const char *filename, char *text_content)
{
	int len;
	int open_ret_val;
	int write_ret_val;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		open_ret_val = open(filename, O_CREAT, 0600);

		if (open_ret_val == -1)
			return (-1);

		close(open_ret_val);
		return (1);
	}

	len = strlen(text_content);
	open_ret_val = open(filename, O_TRUNC | O_RDWR | O_CREAT, 0600);
	if (open_ret_val == -1)
		return (-1);

	write_ret_val = write(open_ret_val, text_content, len);
	if (write_ret_val == -1)
		return (-1);

	close(open_ret_val);
	return (1);
}
