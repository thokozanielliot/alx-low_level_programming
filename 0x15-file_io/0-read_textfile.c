#include "main.h"

/**
 * read_textfile - reads a text file & prints it to POSIX
 * @filename: File name to be read
 * @letters: number of letters to read & print
 *
 * Return: number of letters read & printed
 * 0 if filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t file_read, file_out;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);

	file_read = read(fd, buf, letters);
	file_out = write(STDOUT_FILENO, buf, file_read);

	close(fd);
	free(buf);

	return (file_out);
}
