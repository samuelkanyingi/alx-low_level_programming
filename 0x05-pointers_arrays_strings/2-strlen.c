#include "main.h"
#include <string.h>

/**
 * _strlen - returns length of string
 * @s: parameter
 * Return: length of string
 */

int _strlen(char *s)
{
	int i;
	for (i = 0; s[i]!= '\0' ; i++)
	{
		i++;
	}
	return (i);
}
