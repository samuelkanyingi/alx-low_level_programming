#include "main.h"
/**
 * _strncpy - function
 * @dest: parameter
 * @src: parameter
 * @n:parameter
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	while (n > 0 && *src)
	{
		*dest++ = *src++;
		n--;
	}
	while (n > 0)
	{
		*dest++ = '\0';
		n--;
	}
	return (dest);
}
