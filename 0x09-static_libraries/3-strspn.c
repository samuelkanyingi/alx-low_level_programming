#include "main.h"
#include <string.h>
/**
 * _strspn - function to check if char is present in string
 * @s:input parameter
 * @accept:match parameter
 * Return: length of matching segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;

	while (*s && strchr(accept, *s))
	{
		c++;
		s++;
	}
	return (c);
}
