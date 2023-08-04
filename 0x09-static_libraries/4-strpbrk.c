#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - function that finds first character
 * @s:string to be searched
 * @accept: characters to be searched for
 * Return:NULL if pointer to string is is not found
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *p = accept;
		while (*p)
		{
			if (*s == *p)
			{
				return (s);
			}
			p++;
		}
		s++;
	}
	return (NULL);
}
