#include "main.h"
/**
 * _strcat - function name
 * @dest: parameter
 * @src: parameter
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	char *res  = dest;
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

	return (res);
}
