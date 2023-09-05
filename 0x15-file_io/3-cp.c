#include "main.h"
/**
 * main - function that an copy file content to another file
 * @argc: count of command line arguments
 * @argv: array of command-line args
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	mode_t my_permiss = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char buf[BUF_SIZE];
	ssize_t by_read = 0;
	ssize_t by_written;
	int f_from;
	int f_to;

	if (argc != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
		return (97);
	}
	f_from = open(argv[1], O_RDONLY);
	if (f_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}
	f_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, my_permiss);
	if (f_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		close(f_from);
		return (99);
	}
	while ((by_read = read(f_from, buf, BUF_SIZE)) > 0)
	{
		by_written = write(f_to, buf, by_read);
		if (by_written == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			close(f_from);
			close(f_to);
			return (99);
		}
	}
		if (by_read == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", argv[1]);
			close(f_from);
			close(f_to);
			return (98);
		}
		if (close(f_from) == -1)
		{
			dprintf(2, "Error: Can't close fd %d\n", f_from);
			return (100);
		}
		if (close(f_to) == -1)
		{
			dprintf(2, "Error: Can't close fd %d\n", f_to);
			return (100);
		}
		return (0);
}
