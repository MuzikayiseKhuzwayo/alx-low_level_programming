#include "main.h"

/**
 * append_text_to_file - append text at the end of a file
 *
 * @filename: name of file
 * @text_content: content to be appended
 *
 * Description: -> check for input errors in filename and text content
 *				-> get length of string
 *				-> open file in append mode, check open fail
 *				-> write to file, check for write fail
 *				-> close file, return success
 *
 * Return: 1 (success) or -1 (failure)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int len;
	ssize_t open_ret_val, write_ret_val;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL || *text_content == '\0')
		return (1);

	len = strlen(text_content);
	open_ret_val = open(filename, O_RDWR | O_APPEND, 0600);
	if (open_ret_val == -1)
		return (-1);

	write_ret_val = write(open_ret_val, text_content, len);
	if (write_ret_val == -1)
		return (-1);

	close(open_ret_val);
	return (1);
}
