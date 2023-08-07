#include <stdio.h>
#include <string.h>
#include <unistd.h>
/**
 * create_file -  function that creates a file
 * @filename: name of file
 * @text_content: null string to write to file
 * Return:  1 with success otherwise -1 if it fails
 */
int create_file(const char *filename, char *text_content)
{
	FILE *fil;

	if (filename == NULL)
	{
		return (-1);
	}
	fil = fopen(filename, "w");
	if (fil == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		if (fwrite(text_content, sizeof(char *), strlen(text_content), fil) != strlen(text_content))
		{
			fclose(fil);
			return (-1);
		}
	}
	if (fclose(fil) != 0)
	{
		return (-1);
	}
	return (1);
}
