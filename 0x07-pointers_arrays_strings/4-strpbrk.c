#include <stddef.h>
/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s:parameter
 * @accept:parameter
 * Return: a pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *z = accept;

		while (*z != '\0')
		{
			if (*s == *z)
			{
				return (s);
			}
			z++;
		}
		s++;
	}
	return (NULL);
}
