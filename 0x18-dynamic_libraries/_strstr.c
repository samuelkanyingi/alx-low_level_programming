#include "main.h"
/**
 * _strstr - function to locate e a substring
 * @haystack: larger string
 * @needle: substring
 * Return: pointer to first occurence of a substring in haystack
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *h = haystack;
		const char *n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
