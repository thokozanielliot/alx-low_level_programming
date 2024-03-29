#include "main.h"

/**
 * append_text_to_file - Appends text to file
 * @filename: File name
 * @text_content: text to be appended
 *
 * Return: 1 file exists
 * -1 file doesn't exists or fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, nletters, rwr;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;
		rwr = write(fd, text_content, nletters);
		if (rwr == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
