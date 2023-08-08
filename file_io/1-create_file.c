#include "main.h"
#include <string.h>
/**
 * create_file - function that creates a file.
 * @filename: file path
 * @text_content: text content
 * Return: success (1)
*/
int create_file(const char *filename, char *text_content)
{
	size_t byte = strlen(text_content);
	int bw, file_fd;

	if (filename == NULL)
		return (-1);
	file_fd = open(filename, O_WRONLY, 00600);

	if (file_fd == -1)
	{
		file_fd = open(filename, O_CREAT | O_WRONLY, 00600);

		if (file_fd == -1)
			return (-1);
	}
	bw = write(file_fd, text_content, byte);
	if (bw == -1)
		return (-1);
	close(file_fd);
	return (1);
}
