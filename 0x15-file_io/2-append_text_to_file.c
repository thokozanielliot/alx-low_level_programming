#include "main.h"

/**
 * append_text_to_file - appends text at the end of the file
 * @filename: file name
 * @text_content: text to appended
 *
 * Return: 1 on succes
 * -1 on failure
 * -1 if filename is NULL
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, no_letters, write_cont;

	if (!filename)
		return (-1);

	if (text_content)
	{
		for (no_letters = 0; text_content[no_letters]; no_letters++)
			;
		write_cont = write(file, text_content, no_letters);
		if (write_cont == -1)
			return (-1);
	}

	close(file);
	return (1);
}
