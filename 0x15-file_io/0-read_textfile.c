#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it
 * @filename: nam of file
 * @letters:number of letters it should read and print
 * Return:actual number of letters it might read also print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fil;
	char buffer[1024];
	size_t tot_read = 0;
	size_t read_chars;

	if (filename == NULL)
	{
		return (0);
	}
	fil = fopen(filename, "r");
	if (fil == NULL)
	{
		return (0);
	}
	while (tot_read < letters && (read_chars = fread(buffer, 1, sizeof(buffer), fil)) > 0)
	{
			size_t charsprint = read_chars;

			if (tot_read + read_chars > letters)
				charsprint = letters - tot_read;
			fwrite(buffer, 1, charsprint, stdout);
			tot_read += charsprint;
	}
	fclose(fil);
	return ((ssize_t)(tot_read));
}
