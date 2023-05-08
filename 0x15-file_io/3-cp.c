#include "main.h"

/**
 * file_error - check if file can be opened
 * @file_from: file we copying the content from
 * @file_to: file we pasting the content to
 * @argv: arguement vector
 *
 * Return: No return
 */
void file_error(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[2]);
		exit(98);
	}
}

/**
 * main - copies content from one file to another
 * @argc: number of arguements
 * @argv: arguement vector
 *
 * Return: 0 on succes
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, err_close;
	ssize_t no_chars, write_cont;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cpp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	file_error(file_from, file_to, argv);
	no_chars = 1024;

	while (no_chars == 1024)
	{
		no_chars = read(file_from, buf, 1024);
		if (no_chars == -1)
			file_error(-1, 0, argv);
		write_cont = write(file_to, buf,no_chars);

		if (write_cont == -1)
			file_error(0, -1, argv);
	}

	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fc %d\n", file_from);
		exit(100);
	}

	err_close = close(file_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);

		exit(100);
	}

	return (0);
}
