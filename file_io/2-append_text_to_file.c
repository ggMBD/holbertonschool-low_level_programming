#include "main.h"
#include <string.h>
/**
 * append_text_to_file - function that append text to file.
 * @filename: file path
 * @text_content: text content
 * Return: success (1)
*/
int append_text_to_file(const char *filename, char *text_content)
{
	size_t byte;
	int bw, file_fd;

	if (filename == NULL)
		return (-1);

	file_fd = open(filename, O_CREAT | O_WRONLY | O_APPEND, 0600);
	if (text_content != NULL)
	{
		byte = strlen(text_content);
		bw = write(file_fd, text_content, byte);
		if (bw == -1)
		{
			close(file_fd);
			return (-1);
		}
	}
	close(file_fd);
	return (1);
}
