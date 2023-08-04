#include "main.h"
/**
 * _strcpy - function
 * @dest:destination pointer
 * @src:source pointer
 * Return: result
 */
char *_strcpy(char *dest, char *src)
{
	char *res;

	res = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (res);
}
