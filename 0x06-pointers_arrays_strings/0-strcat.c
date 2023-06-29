#include "main.h"
#include <string.h>
/**
 * _strcat - concatenates two strings
 * @dest:parameter
 * @src:parameter
 * Return: two strings
 */
char *_strcat(char *dest, char *src)
{
	char *hr = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	strcpy(dest, src);
	return (hr);
}
