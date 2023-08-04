#include "main.h"
/**
 * _memcpy - funtction name
 * @dest:destination pointer
 * @src:source pointer
 * @n:parameter
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *res = dest;

	int i;

	for (i = 0; i < n; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (res);
}
