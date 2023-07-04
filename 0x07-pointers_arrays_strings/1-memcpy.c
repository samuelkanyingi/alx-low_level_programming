#include <stddef.h>
/**
 * _memcpy - copies from memory area
 * @dest: parameter
 * @src:parameter
 * @n:parameter
 * Return: memory copied
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;
	char *q = src;

	while (n > 0)
	{
		*p++ = *q++;
		n--;
	}
	return (dest);
}
