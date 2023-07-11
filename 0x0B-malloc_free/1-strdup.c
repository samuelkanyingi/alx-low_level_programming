#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - function that returns a pointer to a new string
 * @str: string to copy
 * Return:pointer to new string
 */
char *_strdup(char *str)
{
	int len;
	char *dup;
	if (str == 0)
	{
		return (NULL);
	}
	len = strlen(str);
	dup = (char *)malloc((len + 1) * sizeof(char));
	if (dup == NULL)
	{
		return (NULL);
	}
	strcpy(dup, str);
	return (dup);
}
