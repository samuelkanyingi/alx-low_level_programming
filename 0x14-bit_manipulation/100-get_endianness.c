#include "main.h"
/**
 * get_endianness - function checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int n = 1;
	unsigned char *b;

	b = (unsigned char *) &n;

	if (b[0] == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
