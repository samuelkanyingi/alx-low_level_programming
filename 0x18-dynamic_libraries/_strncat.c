#include "main.h"
/**
 * _strncat - function to concatenate upto n chars
 * @dest: destination
 * @src: source
 * @n: chars
 * Return: d_start
 */
char *_strncat(char *dest, char *src, int n)
{
	char *d_start = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';

	return (d_start);
}
