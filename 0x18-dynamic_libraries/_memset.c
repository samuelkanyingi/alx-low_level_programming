#include "main.h"
#include <stddef.h>
/**
 * _memset - function the first 'n' bytes of the memory
 * @s:pointer
 * @b:value
 * @n:n bytes
 * Return:  pointer to the modified memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;

	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}
	return (start);
}
