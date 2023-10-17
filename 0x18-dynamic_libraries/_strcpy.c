#include "main.h"
/**
 * _strcpy - function to copy a string
 * @dest: destination to copy
 * @src: source string
 * Return: pointer to a string
 */
char *_strcpy(char *dest, char *src)
{
	char *d_start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	dest = '\0';
	return (d_start);
}
