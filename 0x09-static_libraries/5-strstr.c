#include "main.h"
#include <stddef.h>
/**
 * _strstr - locates first  substring in a string
 * @haystack: string to be searched
 * @needle:string to be found
 * Return: pointr to beginning of substring or null if not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *st;
	char *patt;

	while (*haystack)
	{
		st = haystack;
		patt = needle;

		while (*haystack && *patt && *haystack == *patt)
		{
			haystack++;
			patt++;
		}
		if (*patt == '\0')
		{
			return (st);
		}
		haystack = st + 1;
	}
	return (NULL);
}
