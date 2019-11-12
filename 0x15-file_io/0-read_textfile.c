#include "holberton.h"
/**
 * binary_to_uint - convert binary to decimal.
 * @b: the binary number in string format
 * Description: convert binary to decimal
 * section header: the header of this function is header.h
 * Return: this return the convert number.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, _read, _write;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(letters + 1);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY, 600);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	_read = read(fd, buffer, letters);
	if (_read == -1)
	{
		free(buffer);
		return (0);
	}

	buffer[letters] = '\0';
	_write = write(1, buffer, _read);
	if (_write == -1)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(fd);
	return (_write);
}
