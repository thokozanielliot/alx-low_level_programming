#include "main.h"

/**
 * create_file -  creates a file
 * @filename: name of file
 * @text_content: content writed in the file
 *
 * Return: 1 if it success
 * -1 if it fails
 */
int create_file(const char *filename, char *text_content)
{
	int fd, letters, wr;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (letters = 0; text_content[letters]; letters++)
		;

	wr = write(fd, text_content, letters);

	if (wr == -1)
		return (-1);

	close(fd);

	return (1);
}
