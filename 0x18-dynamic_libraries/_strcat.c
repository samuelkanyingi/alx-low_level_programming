#include "main.h"
/**
 * _strcat - function to concatenate source to end
 * @dest:destination source
 * @src: source string
 * Return: pointer to string
 */
char *_strcat(char *dest, char *src)
{
	char *d_start = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (d_start);
}
