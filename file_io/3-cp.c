#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * error_exit_s - functin that exit code
 * @message: message
 * @extra_info: extra_info
 * @code: code exit
*/
void error_exit_s(const char *message, const char *extra_info, int code)
{
	dprintf(STDERR_FILENO, message, extra_info);
	exit(code);
}
/**
 * error_exit_d - functin that exit code
 * @message: message
 * @extra_info: extra_info
 * @code: code exit
*/
void error_exit_d(const char *message, const int extra_info, int code)
{
	dprintf(STDERR_FILENO, message, extra_info);
	exit(code);
}
/**
 * main - program that copies the content of
 * a file to another file.
 * @argc: argc
 * @argv: argv
 * Return: success (0)
*/
int main(int argc, char *argv[])
{
	const char *file_from = argv[1], *file_to = argv[2];
	int fd_to, fd_from;
	ssize_t nread;
	char buffer[1024];

	if (argc != 3)
		error_exit_s("Usage: cp file_from file_to\n", "", 97);
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		error_exit_s("Error: Can't read from file %s\n", file_from, 98);
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		error_exit_s("Error: Can't write to %s\n", file_to, 99);
	}
	while ((nread = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		ssize_t nwritten = write(fd_to, buffer, nread);

		if (nwritten == -1)
		{
			close(fd_from);
			close(fd_to);
			error_exit_s("Error: Can't write to %s\n", file_to, 99);
		}
	}
	if (nread == -1)
	{
		close(fd_from);
		close(fd_to);
		error_exit_s("Error: Can't read from file %s\n", file_from, 98);
	}
	if (close(fd_from) == -1)
		error_exit_d("Error: Can't close fd %d\n", fd_from, 100);
	if (close(fd_to) == -1)
		error_exit_d("Error: Can't close fd %d\n", fd_to, 100);
	return (0);
}
