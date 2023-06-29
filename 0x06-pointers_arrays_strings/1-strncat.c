#include "main.h"
#include <string.h>
/**
 * _strncat -  concatenates two strings
 * @dest:parameter
 * @src:parameter
 * @n:parameter
 * Return: two strings
 */
char *_strncat(char *dest, char *src, int n)
{
	char *hr = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	strncat(dest, src, n);
	return (hr);
}
