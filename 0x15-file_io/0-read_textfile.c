#include "main.h"

/**
 * read_textfile - reads a text file & prints it
 * @filename: file name to read
 * @letter: numbers to be read & printed
 *
 * Return: Number of letters read and printed
 * 0 if filename is NULL
 * 0 if write fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t no_read, no_write;
	char *buf;

	if (!filename)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	no_read = read(file, buf, letters);
	no_write = write(STDOUT_FILENO, buf, no_read);

	close(file);
	free(buf);

	return (no_write);
}
