#include "main.h"

/**
 * _strchr - function that locate the first occurrence of a specific letter
 * @s: given string
 * @c: specific character
 * Return: pointer to first occurence of c or NULL if not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
