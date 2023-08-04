#include "main.h"
/**
 * _strcpy - function that copies a string
 * @dest:destination buffer
 * @src:source string to be originally copied from
 * Return: pointer to th string @dest destination
 */
char *_strcpy(char *dest, char *src)
{
	char *origin = dest;

	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';

	return (origin);
}
