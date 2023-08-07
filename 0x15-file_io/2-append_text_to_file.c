#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename:name of file
 * @text_content:the NULL terminated string to add at the end of the file
 * Return: 1 on succss otherwise -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;

	if (filename == NULL)
	{
		return (-1);
	}
	file = fopen(filename, "a");
	if (file == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		fprintf(file, "%s", text_content);
	}
	fclose(file);
	return (1);
}
