#include "holberton.h"
/**
 * append_text_to_file - append a file
 * @filename: the file to write.
 * @text_content: the content to write
 * Description: append content o  a file
 * section header: the header of this function is holberton.h
 * Return: 1 in success -1 in failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, _write, i; /* i : the number of bytes of the content */

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[i])
			i++;

		_write = write(fd, text_content, i);
		if (_write == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
