#include "main.h"
#include <sys/stat.h>
#include <sys/types.h>

/**
 * create_file - function that create a file
 * @filename: pointer as name file
 * @text_content: content to write
 * Return: 1 on success otherwise 0
 */
int create_file(const char *filename, char *text_content)
{
	int fdes;
	int l;
	int res;

	if (filename == NULL)
	{
		return (-1);
	}
	fdes = open(filename, O_WRONLY | O_CREAT, 0600);

	if (fdes == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		l = 0;
		while (text_content[l] != '\0')
		{
			l++;
		}
		res = write(fdes, text_content, l);
		if (res == -1)
		{
			close(fdes);
			return (-1);
		}
	}
	if (chmod(filename, 0600) == -1)
	{
		close(fdes);
		return (-1);
	}
	close(fdes);
	return (1);
}

