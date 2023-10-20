#include "main.h"

/**
 * _memcpy - function to copy a specified number of bytes
 * @dest: pointer to destination memory location
 * @src: pointer to source memory location
 * @n: number of bytse to copy
 * Return: pointer to destination memory location
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;
	char *ptr2 = src;

	while (n > 0)
	{
		*ptr = *ptr2;
		ptr++;
		ptr2++;

		n--;
	}
	return (dest);
}
