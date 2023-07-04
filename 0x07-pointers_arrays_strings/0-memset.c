#include <stddef.h>
/**
 * _memset - function to fill memory
 * @s:parameter
 * @b:parameter
 * @n:parameter
 * Return: pointer to memory s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n > 0)
	{
		*p++ = b;
		n--;
	}
	return (s);
}
