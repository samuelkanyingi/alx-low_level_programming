#include "main.h"
#include <string.h>
/**
 * *_strncpy - copies a string
 * @dest:parameter
 * @src:parameter
 * @n: parameter
 * Returni: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *hr = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	strncpy(dest, src, n);
	return (hr);
}
