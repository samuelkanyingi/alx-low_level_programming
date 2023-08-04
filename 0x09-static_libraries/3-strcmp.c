#include "main.h"
/**
 * _strcmp - compare two strings
 * @s1:parameter
 * @s2:parameter
 * Return: s1
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (s1 != s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	if (*s1)
	{
		return (1);
	}
	else if (*s2)
	{
		return (-1);
	}
	return (0);
}
