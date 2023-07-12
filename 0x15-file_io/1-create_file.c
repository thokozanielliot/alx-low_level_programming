#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to be created
 * @text_content: content to be appended to the file
 *
 * Return: 1 on success
 * -1 on failure
 * -1 if filename is NULL
 */
int create_file(const char *filename, char *text_content)
{
	int file, no_letters, write_cont;

	if (!filename)
		return (0);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	if (!text_content)
		text_content = "";

	for (no_letters = 0; text_content[no_letters]; no_letters++)
		;
	write_cont = write(file, text_content, no_letters);

	if (write_cont == -1)
		return (-1);

	close(file);
	return (1);
}

