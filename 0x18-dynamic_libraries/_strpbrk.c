#include "main.h"
/**
 * _strpbrk - function that return first occurence of letter
 * @s: string
 * @accept: chars from another string
 * Return: pointer to first occurence of chars or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		for (int i = 0; accept[i]; i++)
		{
			if (*s  == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
