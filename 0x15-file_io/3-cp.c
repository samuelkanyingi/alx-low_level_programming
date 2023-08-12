#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>

/**
 * exitError- function to chek for errors
 * @message: a pointer to error message
 */
void exError(const char *message)
{
	perror(message);
	exit(EXIT_FAILURE);
}
/**
 * main -entry of program
 * @argc:number of command line arguments
 * @argv:array of strings
 * Return:0 if sucess
 */
int main(int argc, char *argv[])
{
	const char *file_from;
	const char *file_to;
	int s_fd;
	int d_flags;
	int d_mode;
	int d_fd;
	char buffer[1024];
	ssize_t n;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "usage: %s file_from file_to\n", argv[0]);
		return (97);
	}
	file_from = argv[1];
	file_to = argv[2];

	s_fd = open(file_from, O_RDONLY);

	if (s_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		return (98);
	}
	d_flags = O_WRONLY | O_CREAT | O_TRUNC;
	d_mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	d_fd = open(file_to, d_flags, d_mode);
	if (d_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		close(s_fd);
		return (99);
	}

	while ((n =  read(s_fd, buffer, sizeof(buffer))) > 0)
	{
		ssize_t written = write(d_fd, buffer, n);

		if (written != n)
		{
			dprintf(STDERR_FILENO, "Error: Can't write  to %s\n", file_to);
			close(s_fd);
			close(d_fd);
			return (99);
		}
	}
	if (n == 1)
	{
		exError("read error");
	}
	if (close(s_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd\n");
		return (100);
	}
	if (close(d_fd) == -1)
	{
			dprintf(STDERR_FILENO, "Error: Can't close fd\n");
	}
	return (0);
}
