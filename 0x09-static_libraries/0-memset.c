#include "main.h"
/**
 * _memset - function name
 * @s:pointer
 * @b:parameter
 * @n:positive integer
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int z;

	for (z = 0; z < n; z++)
	{
		s[z] = b;
	}
	return (s);
}
