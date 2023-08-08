#include "main.h"

/**
 * read_textfile - function that reads a text file and
 * prints it to the POSIX standard output.
 * @filename: file path
 * @letters: number of lettrers to print it
 * Return: byte printed
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_fd;
	int br, bw;

	char *text;

	if (filename == NULL)
		return (0);

	text = malloc(sizeof(char) * letters);
	if (text == NULL)
		return (0);

	file_fd = open(filename, O_RDONLY);

	if (file_fd == -1)
		return (0);

	br = read(file_fd, text, letters);
	if (br == -1)
	{
		close(file_fd);
		free(text);
		return (0);
	}
	bw = write(STDOUT_FILENO, text, br);

	if (bw == -1)
	{
		free(text);
		close(file_fd);
		return (0);
	}

	close(file_fd);
	return (bw);
}
