#include "main.h"
/**
 *  read_textfile - function to read text
 *  @filename: pointer parameter
 *  @letters: number of letters to read and print
 *  Return:number of bytes read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fdes, c;
	char *bf;

	if (filename == NULL)
	{
		return (0);
	}
	fdes = open(filename, O_RDONLY);
	if (fdes == -1)
	{
		return (0);
	}
	bf = malloc(sizeof(char) * letters);
	if (bf == NULL)
	{
		close(fdes);
		return (0);
	}
	c = read(fdes, bf, letters);
	if (c == -1)
	{
		close(fdes);
		return (0);
	}
	write(STDOUT_FILENO, bf, c);
	close(fdes);
	free(bf);

	return (c);
}

