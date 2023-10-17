#include "main.h"
/**
 * _strncpy - n' characters from the source string to the dest
 * @dest:destination
 * @src: source string
 * @n: character
 * Return: pointer to string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *d_start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (d_start);
}
