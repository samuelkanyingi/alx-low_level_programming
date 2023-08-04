#include "main.h"
/**
 * _strcat - function name
 * @dest :parameter
 * @src: parameter
 * Return: res
 */
char *_strcat(char *dest, char *src)
{
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
	return (dest);
}
