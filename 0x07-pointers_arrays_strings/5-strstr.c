#include <stddef.h>
/**
 * _strstr - function that locates a substring
 * @haystack: parameter
 * @needle:parameter
 * Return: pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *a = haystack;
		char *b = needle;

		while (*b != '\0' && *a == *b)
		{
			a++;
			b++;
		}
		if (*b == '\0')
			return (haystack);
		haystack++;
	}
	return (NULL);
}
