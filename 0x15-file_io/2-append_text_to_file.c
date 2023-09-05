#include "main.h"

/**
 * append_text_to_file - function to append file
 * @filename: pointer to named file
 * @text_content:content of text
 * Return: 1 if successful or 0 if it fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fdes;
	int res;
	int l;

	if (filename == NULL)
	{
		return (-1);
	}

	fdes = open(filename, O_WRONLY | O_CREAT | O_APPEND, 0600);
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
		}
	}
	close(fdes);
	return (1);
}
