#include "main.h"
#include <stddef.h>
/**
 * _strlen - function to calculate length of a string
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	int l = 0;

	if (s == NULL)
	{
		return (-1);
	}
	while (s[l] != '\0')
	{
		l++;
	}

return (l++);
}
